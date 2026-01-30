********SUITE('3can')********
map.size()= 1

StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

    update_in_StaticDataMap_for_BinarySpecOver1_1

    update_in_StaticDataMap_for_BinarySpecOver2_1
    update_in_StaticDataMap_for_BinarySpecOver2_2
    update_in_StaticDataMap_for_BinarySpecOver2_3
    update_in_StaticDataMap_for_BinarySpecOver2_4

        convert_to_event_class_in_StaticDataMap_static1
*        *PointClass_uint8_t pc= 2
*        *PointClass_Class1= 2
*        *PointClass_Class2= 4
*        *PointClass_Class3= 8
    update_in_StaticDataMap_for_BinarySpecOver2_5

        Update_BinarySpec_in_EventReceiver1
REQUIRE(map.update(Binary(true), 0, EventMode::Detect, receiver))
btemp= 1
REQUIRE(receiver.count == 1)
temp= 1
REQUIRE(receiver.latestBinaryEvent.value.value == true)
temp= 1

    update_in_StaticDataMap_for_BinarySpecOver1_1

    update_in_StaticDataMap_for_BinarySpecOver2_1
    update_in_StaticDataMap_for_BinarySpecOver2_2
REQUIRE(map.update(Binary(true), 0, EventMode::Detect, receiver))
btemp= 1
REQUIRE(receiver.count == 1)
temp= 1
