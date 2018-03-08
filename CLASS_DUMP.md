## Class Dump

The DeviceAgent needs access to Apple APIs from two frameworks:

* XCTest.framework
* XCTAutomationSupport.framework

When a new Xcode version is released, we should try to export headers
from these frameworks.

### Requirements

This script requires 'class-dump' to be in your PATH.

* http://stevenygard.com/projects/class-dump/
* https://github.com/nygard/class-dump

Remember that maintainers need to use the Calabash.keychain.
Non-maintainers will need to update the code signing attributes from the
Xcode UI.

### Exporting

This will replace contents of Server/PrivateHeaders.

```
$ bundle update
$ git checkout feature/Xcode-x.x-headers
$ bin/class-dump/dump.rb
$ make unit-tests
$ make ipa-agent
```

### Notes

DeviceAgent needs the XCTest headers. The DeviceAgent unit tests link
XCTest.framework.  To avoid symbol conflicts when linking the
XCTest.framework, we use these techniques:

1. DeviceAgent imports an XCTest umbrella header
2. DeviceAgent uses categories to expose private APIs. Headers in
   `Server/PrivateHeaders` are never edited by hand.
3. DeviceAgent always uses `@class` and `@protocol` to forward-declare
   unknown symbols in header files. DeviceAgent headers should avoid
   unnecessary import statements.
4. Enum typedefs defined in XCTest are extracted to separate header files.
   See `XCUIApplicationStateTypedef.h`.  Seperating the enums from the
   the categories (see 2) avoids have to unnecessarily import XCTest
   symbols when XCTest.framework is linked.  If more typedefs are needed
   it might be possible or adventageous to convert the app-state-type-def
   file to a generic header.

Use this compile macro to avoid including private headers.

```
// Define in XCTest.framework
#ifndef XCT_UI_TESTING_AVAILABLE
```

The umbrella header is generated by the `bin/class-dump/dump.rb` script.
This file should be imported in Objective-C ".m" files - never in
headers.

The `XCTest+CBXAdditions.h` file contains categories XCTest classes.
These categories expose private APIs so the unit tests will compile and
add return and argument type information to private methods to reduce
the amount of type casting required in DeviceAgent.

Before Xcode 9.3 and the introduction of the class-dump script, the
DeviceAgent headers contained many unnecessary import statements.  This
caused many confusing compile time errors.  Every DeviceAgent header has
been updated to use `@class` and `@protocol` where ever possible.
Whenever possible, imports should be made in the `.m` files.