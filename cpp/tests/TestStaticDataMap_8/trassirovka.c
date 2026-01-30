********SUITE('8can select all points using specified variation and iterate')********
map.size()= 3
REQUIRE(map.get_selected_range().Count() == 0)
ctmp= 0
rtmp.start= 1
rtmp.stop= 0

select_all_in_StaticDataMap_for_BinarySpecOver2_1

    select_all_in_StaticDataMap_for_BinarySpecOver3_1
*    *variation= 0

        check_for_promotion_for_BinarySpec_static1
*        *StaticBinaryVariation_uint8_t variation= 0
*        *StaticBinaryVariation_Group1Var1= 0

        IsQualityOnlineOnly_in_BinarySpec_static1
*        *(binary->tTypedMeasurement_for_Boolean).mMeasurement.flags.value= 2
    select_all_in_StaticDataMap_for_BinarySpecOver3_3
*    *sSelectedValue_for_BinarySpec.variation= 1
*    *iter.second.config.eEventConfig.svariation= 1
*    *variation= 0

        check_for_promotion_for_BinarySpec_static1
*        *StaticBinaryVariation_uint8_t variation= 0
*        *StaticBinaryVariation_Group1Var1= 0

        IsQualityOnlineOnly_in_BinarySpec_static1
*        *(binary->tTypedMeasurement_for_Boolean).mMeasurement.flags.value= 2
    select_all_in_StaticDataMap_for_BinarySpecOver3_3
*    *sSelectedValue_for_BinarySpec.variation= 1
*    *iter.second.config.eEventConfig.svariation= 1
*    *variation= 0

        check_for_promotion_for_BinarySpec_static1
*        *StaticBinaryVariation_uint8_t variation= 0
*        *StaticBinaryVariation_Group1Var1= 0

        IsQualityOnlineOnly_in_BinarySpec_static1
*        *(binary->tTypedMeasurement_for_Boolean).mMeasurement.flags.value= 2
    select_all_in_StaticDataMap_for_BinarySpecOver3_3
*    *sSelectedValue_for_BinarySpec.variation= 1
*    *iter.second.config.eEventConfig.svariation= 1
    select_all_in_StaticDataMap_for_BinarySpecOver3_4
*    *pStaticDataMap_for_BinarySpec->map.size()= 3
REQUIRE(map.select_all(other_variation) == 3)
ctmp= 3
item.first= 0
item.second.variation= 1
item.first= 3
item.second.variation= 1
item.first= 7
item.second.variation= 1
REQUIRE(items.size() == 3)
items.size()= 3
REQUIRE(item.second.variation == other_variation)
item.second.variation= 1
REQUIRE(item.second.variation == other_variation)
item.second.variation= 1
REQUIRE(item.second.variation == other_variation)
item.second.variation= 1
