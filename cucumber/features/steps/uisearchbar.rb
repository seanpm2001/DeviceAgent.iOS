When(/^I touch the company search bar$/) do
  touch({marked: "Search", type: "SearchField"})
  wait_for_keyboard
  wait_for_animations
  search_field = query({type: "SearchField"}).first
  expect(search_field["has_keyboard_focus"]).to be_truthy
end

And(/^I type A in the company search bar$/) do
  enter_text("A")
end

Then(/^the search results are Amazon, Apple, and Android$/) do
  # Depending on the iOS version, the filtered rows may or many not
  # be hitable which is how the ruby client interprets visibility.
  wait_for_view({marked: "amazon row", all: true})
  wait_for_view({marked: "apple row", all: true})
  wait_for_view({marked: "android row", all: true})
  expect(query({marked: "basecamp row", all: true})).to be == []
end

Then(/^I dismiss the keyboard by tapping the Search key$/) do
  touch({marked: "Search", type: "Button"})
  wait_for_no_keyboard
  wait_for_animations
end

Then(/^I dismiss the search results by touching the Cancel button$/) do
  touch({marked: "Cancel"})
  wait_for_no_view({marked: "Cancel"})
  wait_for_animations
end

Then(/^I can see the Basecamp row$/) do
  wait_for_view({marked: "basecamp row"})
end

Then(/^I clear text with the clear button in the search bar$/) do
  touch({marked: "Clear text"})
  wait_for_text_in_view("Search", {marked: "Search", type: "SearchField"})
end

Then(/^I clear the search bar text with the clear text route$/) do
  clear_text
  wait_for_text_in_view("Search", {marked: "Search", type: "SearchField"})
end
