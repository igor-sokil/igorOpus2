********SUITE('10can select beyond the first entry')********

StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1
map.size()= 3
stmp.selection.selected= 0
stmp.selection.selected= 0
stmp.selection.selected= 0

    check_for_promotion_for_BinarySpec_static1
*    *StaticBinaryVariation_uint8_t variation= 1
*    *StaticBinaryVariation_Group1Var1= 0

    check_for_promotion_for_BinarySpec_static1
*    *StaticBinaryVariation_uint8_t variation= 1
*    *StaticBinaryVariation_Group1Var1= 0
REQUIRE(map.select(Range::From(3, 8)) == 2)
ctmp= 2
stmp.selection.selected= 0
stmp.selection.selected= 1
stmp.selection.selected= 1
REQUIRE(items.size() == 2)
items.size()= 3
