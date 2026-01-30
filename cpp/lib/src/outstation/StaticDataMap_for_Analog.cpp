
#include "log_info.h"
#ifdef  LOG_INFO
#include <iostream>
#endif
#include "header.h"
#include "StaticDataMap_for_Analog.h"

uint16_t MapSize_for_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec)
{
  return pStaticDataMap_for_AnalogSpec->db_config->analog_input_count;
}

////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap, std::map<uint16_t, AnalogConfig>& config)
void StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1"<<'\n';
#endif
//  StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver1(pStaticDataMap);
  Range_in_RangeOver1(&(pStaticDataMap->selected_in_StaticDataMap_for_AnalogSpec));
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_3"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap->selected.start= "<<(uint16_t)pStaticDataMap->selected_in_StaticDataMap_for_AnalogSpec.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap->selected.stop= "<<(uint16_t)pStaticDataMap->selected_in_StaticDataMap_for_AnalogSpec.stop<<'\n';
#endif
//  for (const auto& item : config)
  pStaticDataMap->db_config = config;
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_2"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*"<<"*config->analog_input_count= "<<MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap)<<'\n';
//  std::cout<<"*config.size()= "<<config.size()<<'\n';
#endif
  if(pStaticDataMap->db_config->analog_input_count > SIZE_StaticDataMap_for_AnalogSpec)
  {
    pStaticDataMap->db_config->analog_input_count = 0;
    return;
  }//if
  for (int i=0; i<MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_Analog_in_StaticDataCell_for_AnalogOver1(StaticDataCell_for_Analog *pStaticDataCell_for_Analog,
//    AnalogConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    AnalogConfig temp = item.second;
    AnalogConfig temp = pStaticDataMap->db_config->analog_input_config[i];
    StaticDataCell_for_Analog sStaticDataCell_for_Analog;

    StaticDataCell_for_Analog_in_StaticDataCell_for_AnalogOver2(&sStaticDataCell_for_Analog, &temp);
//    pStaticDataMap->map[item.first] = sStaticDataCell_for_Analog;
    pStaticDataMap->map[i] = sStaticDataCell_for_Analog;
  }//for

#ifdef  LOG_INFO
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap->map[0].selection_in_StaticDataCell.variation= "<<(uint16_t)pStaticDataMap->map[0].selection_in_StaticDataCell.variation<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1"<<'\n';
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec)
{
  return pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec;
}

////template<class Spec> void StaticDataMap<Spec>::clear_selection()
void clear_selection_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{clear_selection_in_StaticDataMap_for_AnalogSpec1"<<'\n';
#endif

  // the act of iterating clears the selection
//  for (auto iter = pStaticDataMap_for_AnalogSpec->begin(); iter != pStaticDataMap_for_AnalogSpec->end(); ++iter)
//  {

//  }
  Range_in_RangeOver1(&(pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec));

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}clear_selection_in_StaticDataMap_for_AnalogSpec_"<<'\n';
  decrement_stack_info();
#endif
}

////template<class Spec>
////typename Spec::static_variation_t check_for_promotion(const typename Spec::meas_t& value,
////                                                      typename Spec::static_variation_t variation)
StaticAnalogVariation_uint8_t check_for_promotion_for_AnalogSpec_static(Analog* value, StaticAnalogVariation_uint8_t variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"check_for_promotion_for_AnalogSpec_static1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*StaticAnalogVariation_uint8_t variation= "<<(uint16_t)variation<<'\n';
  decrement_stack_info();
#endif
  UNUSED(value);
  return variation;
}

StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index);
StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index);

StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index)
{
  return pStaticDataMap_for_AnalogSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.svariation;
}
StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index)
{
  UNUSED(pStaticDataMap_for_AnalogSpec);
  UNUSED(index);
  StaticAnalogVariation_uint8_t *var = (StaticAnalogVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec)
{
////  return select_all_in_StaticDataMap_for_AnalogSpecOver3(pStaticDataMap_for_AnalogSpec, [](auto var) {
////    return var;
////  }); // use the default
  return select_all_in_StaticDataMap_for_AnalogSpecOver3(pStaticDataMap_for_AnalogSpec, get_variation_in_StaticDataMap_for_AnalogSpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, StaticAnalogVariation_uint8_t variation)
{
////  return select_all_in_StaticDataMap_for_AnalogSpecOver3(pStaticDataMap_for_AnalogSpec, [variation](auto var) {
////    return variation;
////  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_AnalogSpecOver3(pStaticDataMap_for_AnalogSpec, get_variation_in_StaticDataMap_for_AnalogSpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_AnalogSpecOver3(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec,
    StaticAnalogVariation_uint8_t (*get_variation)(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index))
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{select_all_in_StaticDataMap_for_AnalogSpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_AnalogSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_AnalogSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec.stop<<'\n';
#endif

//  if (pStaticDataMap_for_AnalogSpec->map.empty())
  if (MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_AnalogSpecOver3_1_"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_AnalogSpec->selected = From_in_Range_static(pStaticDataMap_for_AnalogSpec->map.begin()->first,
//        pStaticDataMap_for_AnalogSpec->map.rbegin()->first);
    pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec =
      From_in_Range_static(IndexMass2KeyMap_for_AnalogSpec(0),
                           IndexMass2KeyMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec->db_config->analog_input_count-1));
    //0,//pStaticDataMap_for_AnalogSpec->map.begin()->first,
//        pStaticDataMap_for_AnalogSpec->db_config->analog_input_count-1);
//        pStaticDataMap_for_AnalogSpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_AnalogSpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec); i++)
    {
// StaticBinaryVariation_uint8_t check_for_promotion_for_AnalogSpec(Analog* value, StaticAnalogVariation_uint8_t variation);
//void SelectedValue_for_AnalogSpec_in_SelectedValue_for_AnalogSpecOver2(SelectedValue_for_AnalogSpec *pSelectedValue_for_AnalogSpec,
//                                          boolean selected, Analog* value, StaticAnalogVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_AnalogSpec sSelectedValue_for_AnalogSpec;
      SelectedValue_for_AnalogSpec_in_SelectedValue_for_AnalogSpecOver2(&sSelectedValue_for_AnalogSpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_AnalogSpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_AnalogSpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_AnalogSpec_static(&(pStaticDataMap_for_AnalogSpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_AnalogSpec, i)));
//                             pStaticDataMap_for_AnalogSpec->map[i].config_in_StaticDataCell.
//              dDeadbandConfig_for_AnalogInfo.eEventConfig.svariation));
//eEventConfig.svariation));

#ifdef  LOG_INFO
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*select_all_in_StaticDataMap_for_AnalogSpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_AnalogSpec.variation= "<<(uint16_t)sSelectedValue_for_AnalogSpec.variation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_AnalogSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_AnalogSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec.stop<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*i= "<<i<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_Binary = sSelectedValue_for_AnalogSpec;
      pStaticDataMap_for_AnalogSpec->map[i].selection_in_StaticDataCell = sSelectedValue_for_AnalogSpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_AnalogSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_AnalogSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec.stop<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_AnalogSpecOver3_2_"<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_AnalogSpec->map.size();
    return MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec);
  }
}

StaticAnalogVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index);
StaticAnalogVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index);

StaticAnalogVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index)
{
  return pStaticDataMap_for_AnalogSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.svariation;
}
StaticAnalogVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index)
{
  UNUSED(pStaticDataMap_for_AnalogSpec);
  UNUSED(index);
  StaticAnalogVariation_uint8_t *var = (StaticAnalogVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
/////  return select_in_StaticDataMap_for_AnalogSpecOver5(pStaticDataMap_for_AnalogSpec, range, [](auto var) {
/////    return var;
/////  }); // use the default
  return select_in_StaticDataMap_for_AnalogSpecOver5(pStaticDataMap_for_AnalogSpec, range, get_variation_in_in_StaticDataMap_for_AnalogSpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, uint16_t index, StaticAnalogVariation_uint8_t variation)
{
//Range From_in_Range_static(uint16_t start, uint16_t stop);
//uint16_t select_in_StaticDataMap_for_AnalogSpecOver4(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, Range range, StaticAnalogVariation_uint8_t variation)
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_AnalogSpecOver4(pStaticDataMap_for_AnalogSpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_AnalogSpecOver3(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, uint16_t index)
{
//uint16_t select_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, Range range)
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_AnalogSpecOver1(pStaticDataMap_for_AnalogSpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_AnalogSpecOver4(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, Range range, StaticAnalogVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
/////  return select_in_StaticDataMap_for_AnalogSpecOver5(pStaticDataMap_for_AnalogSpec, range, [variation](auto var) {
/////    return variation;
/////  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_AnalogSpecOver5(pStaticDataMap_for_AnalogSpec, range, get_variation_in_in_StaticDataMap_for_AnalogSpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_AnalogSpecOver5(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, Range range,
    StaticAnalogVariation_uint8_t (*get_variation)(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int index))
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_AnalogSpec(pStaticDataMap_for_AnalogSpec->db_config, range.start);

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec))
  {
    return 0;
  }

//boolean Contains_in_Range(Range *pRange, uint16_t index);
////    if (!range.Contains(start->first))
//  if (!Contains_in_Range(&range, start->first))
//  {
//    return 0;
//  }

  uint16_t stop = 0;
  uint16_t count = 0;

//  for (auto iter = start; iter != pStaticDataMap_for_DoubleBitBinarySpec->map.end(); ++iter)
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_AnalogSpec(iter);
    if (!Contains_in_Range(&range, iter_first))
    {
      break;
    }

////    stop = iter->first;
    stop = iter_first;
//StaticBinaryVariation_uint8_t check_for_promotion_for_BinarySpec_static(Analog* value, StaticBinaryVariation_uint8_t variation);
////        iter->second.selection = SelectedValue<Spec>{
////            true, iter->second.value,
////            check_for_promotion<Spec>(iter->second.value, get_variation(iter->second.config.svariation))};
//    DoubleBitBinary dDoubleBitBinary = iter->second.value_in_StaticDataCell;
    Analog aAnalog = pStaticDataMap_for_AnalogSpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_AnalogSpec sSelectedValue_for_AnalogSpec = {
      true, aAnalog,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_AnalogSpec_static(&aAnalog,
          get_variation(pStaticDataMap_for_AnalogSpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_AnalogSpec->map[iter].selection_in_StaticDataCell = sSelectedValue_for_AnalogSpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec = Union_in_Range(&(pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec), &rRange);

  return count;
}

boolean update_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec,
    Analog* value,
    uint16_t index,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{update_in_StaticDataMap_for_AnalogSpecOver1_1"<<'\n';
//  std::cout<<"*"<<getString_stack_info();
//  std::cout<<"*uint16_t index= "<<index<<'\n';
//  std::cout<<"*"<<getString_stack_info();
//  std::cout<<"*pStaticDataMap_for_AnalogSpec->map.size()= "<<pStaticDataMap_for_AnalogSpec->map.size()<<'\n';
#endif
//boolean update_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec,
//    map_iter_t_StaticDataMap_for_AnalogSpec & iter,
//    Analog* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////    return update(this->map.find(index), value, mode, receiver);
/////  map_iter_t_StaticDataMap_for_AnalogSpec  iter = pStaticDataMap_for_AnalogSpec->map.find(index);
/////  int map_iter_t_StaticDataMap_for_AnalogSpec = pStaticDataMap_for_AnalogSpec->map.find(index);
  boolean tmp = update_in_StaticDataMap_for_AnalogSpecOver2(pStaticDataMap_for_AnalogSpec, index, value, mode, receiver);

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}update_in_StaticDataMap_for_AnalogSpecOver1__"<<'\n';
  decrement_stack_info();
#endif
  return tmp;
}

boolean update_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec,
////    map_iter_t_StaticDataMap_for_AnalogSpec & iter,
    uint16_t keyMap,
    Analog* new_value,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{update_in_StaticDataMap_for_AnalogSpecOver2_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"int keyMap= "<<keyMap<<'\n';
  inspect_Analog(new_value);
#endif
//    if (iter == pStaticDataMap_for_AnalogSpec->map.end())
  uint16_t index = KeyMap2IndexMass_for_AnalogSpec(pStaticDataMap_for_AnalogSpec->db_config, keyMap);
  if(index >= MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec))
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}update_in_StaticDataMap_for_AnalogSpecOver21_"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }
////StaticDataCell_for_Analog ttt = iter->second;////!

  if (mode != EventMode_EventOnly)
  {
/////    iter->second.value_in_StaticDataCell = *new_value;
    pStaticDataMap_for_AnalogSpec->map[index].value_in_StaticDataCell = *new_value;
  }
//    Analog old_value = iter->second.event_in_StaticDataCell.eEventCellBase_for_Analog.lastEvent_in_EventCellBase;
  Analog old_value = pStaticDataMap_for_AnalogSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_Analog.lastEvent_in_EventCellBase;
  if (mode == EventMode_Force || mode == EventMode_EventOnly ||
      //boolean IsEvent_in_AnalogSpec_static(Analog *old_value, Analog *new_value, AnalogConfig *config);
      ////        Spec::IsEvent(iter->second.event.lastEvent, new_value, iter->second.config))
//        IsEvent_in_AnalogSpec_static(&old_value, new_value, &(iter->second.config_in_StaticDataCell)))
      IsEvent_in_AnalogSpec_static(&old_value, new_value, &(pStaticDataMap_for_AnalogSpec->map[index].config_in_StaticDataCell)))
  {
//      iter->second.event_in_StaticDataCell.eEventCellBase_for_Analog.lastEvent_in_EventCellBase = *new_value;
    pStaticDataMap_for_AnalogSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_Analog.lastEvent_in_EventCellBase = *new_value;
    if (mode != EventMode_Suppress)
    {
      EventClass_uint8_t ec;
      //boolean convert_to_event_class_in_StaticDataMap_static(PointClass_uint8_t pc, EventClass_uint8_t* ec);
      ////            if (convert_to_event_class(iter->second.config.clazz, ec))
//        if (convert_to_event_class_in_StaticDataMap_static(iter->second.config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.clazz, &ec))
      if (convert_to_event_class_in_StaticDataMap_static(pStaticDataMap_for_AnalogSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.clazz, &ec))
      {
        //void Event_for_AnalogSpec_in_Event_for_AnalogSpecOver2(Event_for_AnalogSpec *pEvent_for_AnalogSpec,
        //    Analog* value, uint16_t index,
        //    EventClass_uint8_t clazz,
        //    event_variation_t_in_AnalogInfo variation);
        //void Update_AnalogSpec_in_IEventReceiver(IEventReceiver *, Event_for_AnalogSpec* evt);
        ////                receiver.Update(Event<Spec>(new_value, iter->first, ec, iter->second.config.evariation));
        Event_for_AnalogSpec eEvent_for_AnalogSpec;
        Event_for_AnalogSpec_in_Event_for_AnalogSpecOver2(&eEvent_for_AnalogSpec,
            new_value,
//              iter->first,
            IndexMass2KeyMap_for_AnalogSpec(index),
            ec,
//              iter->second.config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.evariation);
            pStaticDataMap_for_AnalogSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.evariation);
        Update_AnalogSpec_in_IEventReceiver(receiver, &eEvent_for_AnalogSpec);

      }
    }
  }
#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}update_in_StaticDataMap_for_AnalogSpecOver22_"<<'\n';
  decrement_stack_info();
#endif
  return true;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec));
}

boolean add_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, Analog *value, uint16_t index, AnalogConfig *config)
{
//    if (pStaticDataMap_for_AnalogSpec->map.find(index) != pStaticDataMap_for_AnalogSpec->map.end())
  index = KeyMap2IndexMass_for_AnalogSpec(pStaticDataMap_for_AnalogSpec->db_config, index);
  if (index >= MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec))
  {
    return false;
  }

  //void  StaticDataCell_for_Analog_in_StaticDataCell_for_AnalogOver3(StaticDataCell_for_Analog *pStaticDataCell_for_Analog,
  //    Analog* value,
  //    AnalogConfig* config);
  StaticDataCell_for_Analog sStaticDataCell;
  StaticDataCell_for_Analog_in_StaticDataCell_for_AnalogOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_AnalogSpec->map[index] = sStaticDataCell;////StaticDataCell_for_AnalogSpec{value, config};

  return true;
}

boolean modify_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec,
    uint16_t start, uint16_t stop, uint8_t flags,
    IEventReceiver* receiver)
{
  if (stop < start)
  {
    return false;
  }

  if (start >= MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec))
  {
    return false;
  }

  uint16_t iter = KeyMap2IndexMass_for_AnalogSpec(pStaticDataMap_for_AnalogSpec->db_config, start);
//    for (auto iter = pStaticDataMap_for_AnalogSpec->map.lower_bound(start); iter != pStaticDataMap_for_AnalogSpec->map.end(); ++iter)
  for (; iter != MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec); ++iter)
  {
//      if (iter->first > stop)
    if(IndexMass2KeyMap_for_AnalogSpec(iter) > stop)
    {
      return false;
    }

//      Analog new_value = iter->second.value_in_StaticDataCell;
    Analog new_value = pStaticDataMap_for_AnalogSpec->map[iter].value_in_StaticDataCell;
    ////        new_value.flags = Flags(flags);
    Flags fFlags;
    Flags_In_FlagsOver2(&fFlags, flags);
    new_value.tTypedMeasurement_for_Double64.mMeasurement.flags = fFlags;
    //boolean update_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec,
    //    map_iter_t_StaticDataMap_for_AnalogSpec & iter,
    //    Analog* new_value,
    //    EventMode_uint8_t mode,
    //    IEventReceiver* receiver);
    ////        this->update(iter, new_value, EventMode::Detect, receiver);
    update_in_StaticDataMap_for_AnalogSpecOver2(pStaticDataMap_for_AnalogSpec,
        IndexMass2KeyMap_for_AnalogSpec(iter),
        &new_value,
        EventMode_Detect,
        receiver);
  }//for

  return true;
}

////template<class Spec> Range StaticDataMap<Spec>::get_full_range() const
Range get_full_range_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{get_full_range_in_StaticDataMap_for_AnalogSpec1"<<'\n';
#endif
//Range From_in_Range_static(uint16_t start, uint16_t stop);
//Range Invalid_in_Range_static(void);
////    return this->map.empty() ? Range::Invalid() : Range::From(this->map.begin()->first, this->map.rbegin()->first);

//    Range tmp = pStaticDataMap_for_AnalogSpec->map.empty() ? Invalid_in_Range_static() :
//           From_in_Range_static(pStaticDataMap_for_AnalogSpec->map.begin()->first, pStaticDataMap_for_AnalogSpec->map.rbegin()->first);
  Range tmp = MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec)==0 ? Invalid_in_Range_static() :
              From_in_Range_static(IndexMass2KeyMap_for_AnalogSpec(0),
                                   IndexMass2KeyMap_for_AnalogSpec(MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec)-1));

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}get_full_range_in_StaticDataMap_for_AnalogSpec_"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*Range tmp.start= "<<tmp.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*Range tmp.stop= "<<tmp.stop<<'\n';
  decrement_stack_info();
#endif
  return tmp;
}

////template<class Spec> Range StaticDataMap<Spec>::assign_class(PointClass clazz)
Range assign_class_in_StaticDataMap_for_AnalogSpecOver1(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, PointClass_uint8_t clazz)
{
//    for (auto& elem : pStaticDataMap_for_AnalogSpec->map)
  uint16_t  next_index = 0;
  while(next_index < MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec))
  {
    pStaticDataMap_for_AnalogSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

////    return this->get_full_range();
  return get_full_range_in_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec);
}

////template<class Spec> Range StaticDataMap<Spec>::assign_class(PointClass clazz, const Range& range)
Range assign_class_in_StaticDataMap_for_AnalogSpecOver2(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, PointClass_uint8_t clazz, Range* range)
{
//    for (auto iter = pStaticDataMap_for_AnalogSpec->map.lower_bound(range->start);
//              iter != pStaticDataMap_for_AnalogSpec->map.end() &&
  ////             range.Contains(iter->first);
//         Contains_in_Range(range, iter->first); iter++)
  uint16_t next_index = IndexMass2KeyMap_for_AnalogSpec(range->start);
  while((next_index < MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec)) &&
        Contains_in_Range(range, KeyMap2IndexMass_for_AnalogSpec(pStaticDataMap_for_AnalogSpec->db_config, next_index)))
  {
    pStaticDataMap_for_AnalogSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

//Range get_full_range_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec);
//Range Intersection_in_Range(Range *pRange, Range* other);
////    return range.Intersection(this->get_full_range());
  Range temp = get_full_range_in_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec);
  return Intersection_in_Range(range, &temp);
}

int iterator_operatorPlusPlus_for_AnalogSpec(StaticDataMap_for_AnalogSpec *pStaticDataMap_for_AnalogSpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_AnalogSpec = false;
  pStaticDataMap_for_AnalogSpec->map[i].selection_in_StaticDataCell.selected_in_SelectedValue_for_AnalogSpec = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_AnalogSpec(pStaticDataMap_for_AnalogSpec);
    }

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"*operator++1"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
#endif
    // shorten the range
////        this->range.start = iter->first;
    pStaticDataMap_for_AnalogSpec->selected_in_StaticDataMap_for_AnalogSpec.start = IndexMass2KeyMap_for_AnalogSpec(i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_AnalogSpec)
    if ( pStaticDataMap_for_AnalogSpec->map[i].selection_in_StaticDataCell.selected_in_SelectedValue_for_AnalogSpec)
    {
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++2_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return i;
    }
  }//while
#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}operator++3_"<<'\n';
  decrement_stack_info();
#endif
  return i;
}
