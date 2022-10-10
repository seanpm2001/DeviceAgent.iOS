// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 26 2020 14:08:26).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSEnumerator, NSIndexPath, NSSet, NSString, NSValue, XCAccessibilityElement, XCTLocalizableStringInfo;
@protocol XCTElementSnapshotAttributeDataSource, XCUIElementSnapshotApplication;


@protocol XCTElementSnapshotAttributeDataSource;

@interface XCElementSnapshot : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isMainWindow;
    BOOL _enabled;
    BOOL _selected;
    BOOL _hasFocus;
    BOOL _hasKeyboardFocus;
    BOOL _isTruncatedValue;
    BOOL _hasPrivilegedAttributeValues;
    NSUInteger _windowContextID;
    NSUInteger _faultedInProperties;
    id <XCUIElementSnapshotApplication> _application;
    NSUInteger _generation;
    id <XCTElementSnapshotAttributeDataSource> _dataSource;
    NSInteger _displayID;
    NSString *_title;
    NSString *_label;
    id _value;
    NSString *_placeholderValue;
    NSUInteger _elementType;
    NSUInteger _traits;
    NSString *_identifier;
    NSInteger _verticalSizeClass;
    NSInteger _horizontalSizeClass;
    NSArray *_children;
    NSDictionary *_additionalAttributes;
    NSArray *_userTestingAttributes;
    NSSet *_disclosedChildRowAXElements;
    NSValue *_activationPoint;
    NSInteger _interfaceOrientation;
    XCAccessibilityElement *_accessibilityElement;
    XCAccessibilityElement *_parentAccessibilityElement;
    XCElementSnapshot *_parent;
    XCTLocalizableStringInfo *_localizableStringInfo;
    CGRect _frame;
    CGRect _eventSynthesisFrame;
}

@property(readonly, copy, nonatomic) XCAccessibilityElement *accessibilityElement;
@property(copy) NSValue *activationPoint;
@property(copy) NSDictionary *additionalAttributes;
@property(readonly) BOOL anyDescendantHasPrivilegedAttributeValues;
@property(nonatomic) __weak id <XCUIElementSnapshotApplication> application;
@property(readonly) CGPoint center;
@property(readonly) double centerX;
@property(readonly) double centerY;
@property(readonly, copy) NSEnumerator *childEnumerator;
@property(copy) NSArray *children;
@property(readonly, copy) NSString *compactDescription;
@property __weak id <XCTElementSnapshotAttributeDataSource> dataSource;
@property(readonly) NSUInteger depth;
@property(readonly, copy) NSEnumerator *descendantEnumerator;
@property(copy) NSSet *disclosedChildRowAXElements;
@property(readonly) NSArray *disclosedChildRows;
@property NSInteger displayID;
@property NSUInteger elementType;
@property CGRect eventSynthesisFrame;
@property NSUInteger faultedInProperties;
@property CGRect frame;
@property(nonatomic) NSUInteger generation;
@property BOOL hasFocus;
@property BOOL hasKeyboardFocus;
@property BOOL hasPrivilegedAttributeValues;
@property NSInteger horizontalSizeClass;
@property(copy) NSString *identifier;
@property(readonly, copy) NSArray *identifiers;
@property(readonly, copy) NSIndexPath *indexPath;
@property(readonly) NSInteger interfaceOrientation;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) BOOL isInRootMenu;
@property(readonly) BOOL isMacOS;
@property BOOL isMainWindow;
@property(readonly) BOOL isRemote;
@property(getter=isSelected) BOOL selected;
@property(readonly) BOOL isTopLevelTouchBarElement;
@property(readonly) BOOL isTouchBarElement;
@property BOOL isTruncatedValue;
@property(copy) NSString *label;
@property(copy) XCTLocalizableStringInfo *localizableStringInfo;
@property(readonly) /*XCElementSnapshot **/id menu;
@property(readonly) /*XCElementSnapshot **/id menuItem;
@property(readonly) /*XCElementSnapshot **/id outline;
@property __weak /*XCElementSnapshot **/id parent;
@property(retain) XCAccessibilityElement *parentAccessibilityElement;
@property(readonly, copy) NSString *pathDescription;
@property(readonly, copy) /*XCElementSnapshot **/id pathFromRoot;
@property(copy) NSString *placeholderValue;
@property(readonly) NSString *recursiveDescription;
@property(readonly) NSString *recursiveDescriptionIncludingAccessibilityElement;
@property(readonly) /*XCElementSnapshot **/id rootElement;
@property(readonly) /*XCElementSnapshot **/id scrollView;
@property(copy) NSString *title;
@property NSUInteger traits;
@property(copy) NSArray *userTestingAttributes;
@property(copy) id value;
@property NSInteger verticalSizeClass;
@property NSUInteger windowContextID;
@property(readonly, copy) NSString *sparseTreeDescription;
@property(readonly, copy) NSString *truncatedValueString;
@property(readonly) NSSet *uniqueDescendantSubframes;
@property(readonly) CGRect visibleFrame;
@property(readonly) /*XCElementSnapshot **/id window;

+ (id)axAttributesForElementSnapshotKeyPaths:(id)arg1 isMacOS:(BOOL)arg2;
+ (id)axAttributesForFaultingPropertiesOnMacOS:(BOOL)arg1;
+ (id)axAttributesForSnapshotAttributes:(id)arg1 isMacOS:(BOOL)arg2;
+ (NSUInteger)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_iOS:(id)arg2 useLegacyElementType:(BOOL)arg3;
+ (NSUInteger)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_macOS:(id)arg2 macCatalystStatusProvider:(id)arg3 useLegacyElementType:(BOOL)arg4;
+ (id)elementWithAccessibilityElement:(id)arg1;
+ (id)requiredAXAttributesForElementSnapshotHierarchyOnMacOS:(BOOL)arg1;
+ (id)sanitizedElementSnapshotHierarchyAttributesForAttributes:(id)arg1 isMacOS:(BOOL)arg2;
- (id)_allDescendants;
- (void)_assertForFaultsInContext:(CDUnknownBlockType)arg1;
- (id)_childMatchingElement:(id)arg1;
- (void)_compensateForInsufficientElementTypeData;
- (NSUInteger)_faultingBitForKey:(id)arg1;
- (BOOL)_fetchBoolForKey:(id)arg1;
- (id)_fetchPrivilegedValueForKey:(id)arg1;
- (id)_fetchSimpleValueForKey:(id)arg1;
- (BOOL)_frameFuzzyMatchesElement:(id)arg1;
- (BOOL)_frameFuzzyMatchesElement:(id)arg1 tolerance:(double)arg2;
- (BOOL)_fuzzyMatchesElement:(id)arg1;
- (BOOL)_isAncestorOfElement:(id)arg1;
- (BOOL)_isDescendantOfElement:(id)arg1;
- (BOOL)_isFaultedIn:(NSUInteger)arg1;
- (BOOL)_matchesElement:(id)arg1;
- (id)_nearestAncestorMatchingAnyOfTypes:(id)arg1;
- (void)_recursivelyResetElementType;
- (void)_recursivelySetFaultedBits:(NSUInteger)arg1;
- (void)_setIsFaultedIn:(NSUInteger)arg1;
- (BOOL)_shouldAttemptFaultForBit:(NSUInteger)arg1;
- (BOOL)_shouldAttemptPrivilegedFaultForValue:(id)arg1;
- (void)_unsetIsFaultedIn:(NSUInteger)arg1;
- (BOOL)_willAssertOnFault;
- (id)debugDescription;
- (id)descendantAtIndexPath:(id)arg1;
- (id)descendantsByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)descriptionIncludingPointers:(BOOL)arg1;
- (id)dictionaryRepresentationWithAttributes:(id)arg1;
- (id)elementSnapshotMatchingAccessibilityElement:(id)arg1;
- (void)enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasDescendantMatchingFilter:(CDUnknownBlockType)arg1;
- (id)initWithAccessibilityElement:(id)arg1;
- (id)localizableStringsDataIncludingChildren;
- (void)markAsFaultedInPropertiesDerivedFromSnapshotAttributes:(id)arg1;
- (BOOL)matchesTreeWithRoot:(id)arg1;
- (void)mergeTreeWithSnapshot:(id)arg1;
- (id)nearestAncestorMatchingType:(NSInteger)arg1;
- (id)nearestRemoteAncestor;
- (id)nearestSharedAncestorOfElement:(id)arg1 matchingType:(NSInteger)arg2;
- (id)recursiveDescriptionWithIndent:(id)arg1 includeAccessibilityElement:(BOOL)arg2 includingPointers:(BOOL)arg3;
- (void)recursivelyClearDataSource;
- (void)replaceDescendant:(id)arg1 withElement:(id)arg2;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (id)sparseTreeWithDescendants:(id)arg1 error:(id *)arg2;

@end

