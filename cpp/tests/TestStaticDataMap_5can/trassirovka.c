********SUITE('5can ignore events on existing point')********
map.size()= 1

StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

    update_in_StaticDataMap_for_BinarySpecOver2_1
REQUIRE(map.update(Binary(true), 0, EventMode::Suppress, receiver))
btemp= 1
REQUIRE((*map.begin()).second.value.value == true)
temp= 1
REQUIRE(receiver.count == 0)
temp= 1
REQUIRE(receiver.latestBinaryEvent.value.value == true)
temp= 1

    update_in_StaticDataMap_for_BinarySpecOver2_1
REQUIRE(map.update(Binary(true), 0, EventMode::Suppress, receiver))
btemp= 1
REQUIRE(receiver.count == 0)
temp= 1
