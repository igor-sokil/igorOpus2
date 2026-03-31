#include "log_info.h"

#include "header_dnp3.h"
#include "StaticDataMap_for_Binary.h"

uint16_t MapSize_for_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec)
{
  return pStaticDataMap_for_BinarySpec->db_config->binary_input_count;
}

////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap, std::map<uint16_t, BinaryConfig>& config)
void StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_1"<<'\n';
#endif

//  StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver1(pStaticDataMap);
  Range_in_RangeOver1(&(pStaticDataMap->selected_in_StaticDataMap_for_BinarySpec));
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_3"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap->selected.start= "<<(uint16_t)pStaticDataMap->selected_in_StaticDataMap_for_BinarySpec.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap->selected.stop= "<<(uint16_t)pStaticDataMap->selected_in_StaticDataMap_for_BinarySpec.stop<<'\n';
#endif
//  pStaticDataMap->iterator_for_BinarySpec = 0;
//  for (const auto& item : config)
  pStaticDataMap->db_config = config;
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_2"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*"<<"*config->binary_input_count= "<<MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap)<<'\n';
//  std::cout<<"*config.size()= "<<config.size()<<'\n';
#endif

  for (int i=0; i<MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1(StaticDataCell_for_Binary *pStaticDataCell_for_Binary,
//    BinaryConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    BinaryConfig temp = item.second;
    BinaryConfig temp = pStaticDataMap->db_config->binary_input_config[i];
    StaticDataCell_for_Binary sStaticDataCell_for_Binary;
    StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver2(&sStaticDataCell_for_Binary, &temp);
    //pStaticDataMap->map[item.first] = sStaticDataCell_for_Binary;
    pStaticDataMap->map[i] = sStaticDataCell_for_Binary;
  }
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2__"<<'\n';
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec)
{
  return pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec;
}

////template<class Spec> void StaticDataMap<Spec>::clear_selection()
void clear_selection_in_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{clear_selection_in_StaticDataMap_for_BinarySpec1"<<'\n';
#endif

  // the act of iterating clears the selection
//  for (auto iter = pStaticDataMap_for_BinarySpec->begin(); iter != pStaticDataMap_for_BinarySpec->end(); ++iter)
//  {

//  }
  Range_in_RangeOver1(&(pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec));

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}clear_selection_in_StaticDataMap_for_BinarySpec_"<<'\n';
  decrement_stack_info();
#endif
}

StaticBinaryVariation_uint8_t get_variation_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index);
StaticBinaryVariation_uint8_t get_variation_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index);

StaticBinaryVariation_uint8_t get_variation_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index)
{
  return pStaticDataMap_for_BinarySpec->map[index].config_in_StaticDataCell.eEventConfig.svariation;
}
StaticBinaryVariation_uint8_t get_variation_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index)
{
  UNUSED(pStaticDataMap_for_BinarySpec);
  UNUSED(index);
  StaticBinaryVariation_uint8_t *var = (StaticBinaryVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec)
{
//  return select_all_in_StaticDataMap_for_BinarySpecOver3(pStaticDataMap_for_BinarySpec, [](auto var) {
//    return var;
//  }); // use the default
//  return 0;
//   return select_all_in_StaticDataMap_for_BinarySpecOver3(pStaticDataMap_for_BinarySpec);
  return select_all_in_StaticDataMap_for_BinarySpecOver3(pStaticDataMap_for_BinarySpec, get_variation_in_StaticDataMap_for_BinarySpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, StaticBinaryVariation_uint8_t variation)
{
////  return select_all_in_StaticDataMap_for_BinarySpecOver3(pStaticDataMap_for_BinarySpec, [variation](auto var) {
////    return variation;
////  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_BinarySpecOver3(pStaticDataMap_for_BinarySpec, get_variation_in_StaticDataMap_for_BinarySpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_BinarySpecOver3(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec,
    StaticBinaryVariation_uint8_t (*get_variation)(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index)
                                                        ) //, F get_variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"select_all_in_StaticDataMap_for_BinarySpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_BinarySpec= "<<(uint32_t)pStaticDataMap_for_BinarySpec<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_BinarySpec->selected.start= "<<(uint16_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_BinarySpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.stop<<'\n';
#endif

//  if (pStaticDataMap_for_BinarySpec->map.empty())
  if (MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_BinarySpecOver3_2"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_BinarySpec->selected = From_in_Range_static(pStaticDataMap_for_BinarySpec->map.begin()->first,
//        pStaticDataMap_for_BinarySpec->map.rbegin()->first);
    pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec = //From_in_Range_static(//0,//pStaticDataMap_for_BinarySpec->map.begin()->first,
      From_in_Range_static(IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, 0),
                           IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config,
               MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec)-1));
//             pStaticDataMap_for_BinarySpec->db_config->binary_input_count-1);
//        pStaticDataMap_for_BinarySpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_BinarySpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec); i++)
    {
// StaticBinaryVariation_uint8_t check_for_promotion_for_BinarySpec(Binary* value, StaticBinaryVariation_uint8_t variation);
//void SelectedValue_for_BinarySpec_in_SelectedValue_for_BinarySpecOver2(SelectedValue_for_BinarySpec *pSelectedValue_for_BinarySpec,
//                                          boolean selected, Binary* value, StaticBinaryVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_BinarySpec sSelectedValue_for_BinarySpec;
      SelectedValue_for_BinarySpec_in_SelectedValue_for_BinarySpecOver2(&sSelectedValue_for_BinarySpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_BinarySpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_BinarySpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_BinarySpec_static(&(pStaticDataMap_for_BinarySpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_BinarySpec, i)));

#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"select_all_in_StaticDataMap_for_BinarySpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_BinarySpec.variation= "<<(uint16_t)sSelectedValue_for_BinarySpec.variation<<'\n';
//  std::cout<<"*"<<getString_stack_info();
//  std::cout<<"*iter.second.config.eEventConfig.svariation= "<<(uint16_t)iter.second.config_in_StaticDataCell.eEventConfig.svariation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_BinarySpec->selected.start= "<<(uint16_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_BinarySpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.stop<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_Binary = sSelectedValue_for_BinarySpec;
      pStaticDataMap_for_BinarySpec->map[i].selection_in_StaticDataCell_for_Binary = sSelectedValue_for_BinarySpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_BinarySpecOver3_4"<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_BinarySpec->selected.start= "<<(uint16_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_BinarySpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.stop<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_BinarySpec->map.size();
    return MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec);
  }
}

StaticBinaryVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index);
StaticBinaryVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index);

StaticBinaryVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index)
{
  return pStaticDataMap_for_BinarySpec->map[index].config_in_StaticDataCell.eEventConfig.svariation;
}
StaticBinaryVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index)
{
  UNUSED(pStaticDataMap_for_BinarySpec);
  UNUSED(index);
  StaticBinaryVariation_uint8_t *var = (StaticBinaryVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
//  return select_in_StaticDataMap_for_BinarySpecOver5(pStaticDataMap_for_BinarySpec, range, [](auto var) {
//    return var;
//  }); // use the default
  return select_in_StaticDataMap_for_BinarySpecOver5(pStaticDataMap_for_BinarySpec, range, get_variation_in_in_StaticDataMap_for_BinarySpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, uint16_t index, StaticBinaryVariation_uint8_t variation)
{
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_BinarySpecOver4(pStaticDataMap_for_BinarySpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_BinarySpecOver3(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, uint16_t index)
{
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_BinarySpecOver1(pStaticDataMap_for_BinarySpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_BinarySpecOver4(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, Range range, StaticBinaryVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
//  return select_in_StaticDataMap_for_BinarySpecOver5(pStaticDataMap_for_BinarySpec, range, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_BinarySpecOver5(pStaticDataMap_for_BinarySpec, range, get_variation_in_in_StaticDataMap_for_BinarySpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_BinarySpecOver5(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, Range range,
    StaticBinaryVariation_uint8_t (*get_variation)(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int index))
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{select_in_StaticDataMap_for_BinarySpecOver5_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*selected_in_StaticDataMap_for_BinarySpec.start= "<<(uint32_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*selected_in_StaticDataMap_for_BinarySpec.stop= "<<(uint32_t)pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.stop<<'\n';
#endif
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
#ifdef  LOG_INFO
    std::cout<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}select_in_StaticDataMap_for_BinarySpecOver5_1_"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, range.start);
#ifdef  LOG_INFO
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*select_in_StaticDataMap_for_BinarySpecOver5_2"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint16_t start= "<<start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*range.start= "<<range.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*MapSize_for_StaticDataMap_for_BinarySpec= "<<MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec)<<'\n';
#endif

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec))
  {
#ifdef  LOG_INFO
    std::cout<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}select_in_StaticDataMap_for_BinarySpecOver5_2_"<<'\n';
    decrement_stack_info();
#endif
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
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, iter);
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
    Binary bBinary = pStaticDataMap_for_BinarySpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_BinarySpec sSelectedValue_for_BinarySpec = {
      true, bBinary,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_BinarySpec_static(&bBinary,
          get_variation(pStaticDataMap_for_BinarySpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_BinarySpec->map[iter].selection_in_StaticDataCell_for_Binary = sSelectedValue_for_BinarySpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec = Union_in_Range(&(pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec), &rRange);

#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}select_in_StaticDataMap_for_BinarySpecOver5_3_"<<'\n';
  decrement_stack_info();
#endif
  return count;
}

boolean update_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec,
    Binary* value,
    uint16_t index,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
//boolean update_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec,
//    map_iter_t_StaticDataMap_for_BinarySpec & iter,
//    Binary* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////    return update(this->map.find(index), value, mode, receiver);
//  map_iter_t_StaticDataMap_for_BinarySpec  iter = pStaticDataMap_for_BinarySpec->map.find(index);
  return update_in_StaticDataMap_for_BinarySpecOver2(pStaticDataMap_for_BinarySpec,
//         iter, value, mode, receiver);
         index, value, mode, receiver);
//  boolean tmp = 0;
//  return tmp;
}

boolean update_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec,
//    map_iter_t_StaticDataMap_for_BinarySpec & iter,
    uint16_t keyMap,
    Binary* new_value,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{update_in_StaticDataMap_for_BinarySpecOver2_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint16_t keyMap= "<<keyMap<<'\n';
  inspect_Binary(new_value);
#endif
//  if (iter == pStaticDataMap_for_BinarySpec->map.end())
  uint16_t index = KeyMap2IndexMass_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, keyMap);
  if(index >= MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec))
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}update_in_StaticDataMap_for_BinarySpecOver2__"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }

  if (mode != EventMode_EventOnly)
  {
//    iter->second.value_in_StaticDataCell = *new_value;
    pStaticDataMap_for_BinarySpec->map[index].value_in_StaticDataCell = *new_value;
  }

  Binary old_value = pStaticDataMap_for_BinarySpec->map[index].event_in_StaticDataCell.eEventCellBase_for_Binary.lastEvent;
  if (mode == EventMode_Force || mode == EventMode_EventOnly ||
//boolean IsEvent_in_BinarySpec_static(Binary *old_value, Binary *new_value, BinaryConfig *config);
////        Spec::IsEvent(iter->second.event.lastEvent, new_value, iter->second.config))
//      IsEvent_in_BinarySpec_static(&old_value, new_value, &(iter->second.config_in_StaticDataCell)))
      IsEvent_in_BinarySpec_static(&old_value, new_value, &(pStaticDataMap_for_BinarySpec->map[index].config_in_StaticDataCell)))
  {
//    iter->second.event_in_StaticDataCell.eEventCellBase_for_Binary.lastEvent = *new_value;
    pStaticDataMap_for_BinarySpec->map[index].event_in_StaticDataCell.eEventCellBase_for_Binary.lastEvent = *new_value;
    if (mode != EventMode_Suppress)
    {
      EventClass_uint8_t ec;
//boolean convert_to_event_class_in_StaticDataMap_static(PointClass_uint8_t pc, EventClass_uint8_t* ec);
////            if (convert_to_event_class(iter->second.config.clazz, ec))
      if (convert_to_event_class_in_StaticDataMap_static(pStaticDataMap_for_BinarySpec->map[index].config_in_StaticDataCell.eEventConfig.clazz, &ec))
      {
#ifdef  LOG_INFO
        std::cout<<"*"<<getString_stack_info();
        std::cout<<"*update_in_StaticDataMap_for_BinarySpecOver2_2"<<'\n';
#endif
//void Event_for_BinarySpec_in_Event_for_BinarySpecOver2(Event_for_BinarySpec *pEvent_for_BinarySpec,
//    Binary* value, uint16_t index,
//    EventClass_uint8_t clazz,
//    event_variation_t_in_BinaryInfo variation);
//void Update_BinarySpec_in_IEventReceiver(IEventReceiver *, Event_for_BinarySpec* evt);
////                receiver.Update(Event<Spec>(new_value, iter->first, ec, iter->second.config.evariation));
        Event_for_BinarySpec eEvent_for_BinarySpec;
        Event_for_BinarySpec_in_Event_for_BinarySpecOver2(&eEvent_for_BinarySpec,
            new_value,
//            iter->first,
            IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, index),
            ec,
//            iter->second.config_in_StaticDataCell.eEventConfig.evariation);
            pStaticDataMap_for_BinarySpec->map[index].config_in_StaticDataCell.eEventConfig.evariation);
#ifdef  LOG_INFO
        std::cout<<"*"<<getString_stack_info();
        std::cout<<"*update_in_StaticDataMap_for_BinarySpecOver2_3"<<'\n';
#endif
        Update_BinarySpec_in_IEventReceiver(receiver, &eEvent_for_BinarySpec);

      }
    }
  }

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}update_in_StaticDataMap_for_BinarySpecOver2__"<<'\n';
  decrement_stack_info();
#endif
  return true;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec));
}

boolean add_in_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, Binary *value, uint16_t index, BinaryConfig *config)
{
//  if (pStaticDataMap_for_BinarySpec->map.find(index) != pStaticDataMap_for_BinarySpec->map.end())
  index = KeyMap2IndexMass_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, index);
  if (index >= MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec))
  {
    return false;
  }

//void  StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver3(StaticDataCell_for_Binary *pStaticDataCell_for_Binary,
//    Binary* value,
//    BinaryConfig* config);
  StaticDataCell_for_Binary sStaticDataCell;
  StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_BinarySpec->map[index] = sStaticDataCell;////StaticDataCell_for_BinarySpec{value, config};

  return true;
}

boolean modify_in_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec,
    uint16_t start, uint16_t stop, uint8_t flags,
    IEventReceiver* receiver)
{
  if (stop < start)
  {
    return false;
  }

  if (start >= MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec))
  {
    return false;
  }

  uint16_t iter = KeyMap2IndexMass_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, start);

//  for (auto iter = pStaticDataMap_for_BinarySpec->map.lower_bound(start); iter != pStaticDataMap_for_BinarySpec->map.end(); ++iter)
  for (; iter != MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec); ++iter)
  {
//    if (iter->first > stop)
    if(IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, iter) > stop)
    {
      return false;
    }

//    Binary new_value = iter->second.value_in_StaticDataCell;
    Binary new_value = pStaticDataMap_for_BinarySpec->map[iter].value_in_StaticDataCell;
////        new_value.flags = Flags(flags);
    Flags fFlags;
    Flags_In_FlagsOver2(&fFlags, flags);
    new_value.tTypedMeasurement_for_Boolean.mMeasurement.flags = fFlags;
//boolean update_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec,
//    map_iter_t_StaticDataMap_for_BinarySpec & iter,
//    Binary* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////        this->update(iter, new_value, EventMode::Detect, receiver);
    update_in_StaticDataMap_for_BinarySpecOver2(pStaticDataMap_for_BinarySpec,
        IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, iter),
        &new_value,
        EventMode_Detect,
        receiver);
  }

  return true;
}

////template<class Spec> Range StaticDataMap<Spec>::get_full_range() const
Range get_full_range_in_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec)
{
//Range From_in_Range_static(uint16_t start, uint16_t stop);
//Range Invalid_in_Range_static(void);
////    return this->map.empty() ? Range::Invalid() : Range::From(this->map.begin()->first, this->map.rbegin()->first);
//  return pStaticDataMap_for_BinarySpec->map.empty() ? Invalid_in_Range_static() :
//         From_in_Range_static(pStaticDataMap_for_BinarySpec->map.begin()->first, pStaticDataMap_for_BinarySpec->map.rbegin()->first);
  return MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec)==0 ? Invalid_in_Range_static() :
         From_in_Range_static(IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, 0),
                              IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config,
                      MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec)-1));
}

////template<class Spec> Range StaticDataMap<Spec>::assign_class(PointClass clazz)
Range assign_class_in_StaticDataMap_for_BinarySpecOver1(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, PointClass_uint8_t clazz)
{
//  for (auto& elem : pStaticDataMap_for_BinarySpec->map)
//  {
//    elem.second.config_in_StaticDataCell.eEventConfig.clazz = clazz;
//  }

  uint16_t  next_index = 0;
  while(next_index < MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec))
  {
    pStaticDataMap_for_BinarySpec->map[next_index].config_in_StaticDataCell.eEventConfig.clazz = clazz;
    next_index++;
  }

////    return this->get_full_range();
  return get_full_range_in_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec);
}

Range assign_class_in_StaticDataMap_for_BinarySpecOver2(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, PointClass_uint8_t clazz, Range* range)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{assign_class_in_StaticDataMap_for_BinarySpecOver2_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*PointClass_uint8_t clazz= "<<(uint16_t)clazz<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*Range* range= "<<(uint32_t)range<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec= "<<(uint32_t)pStaticDataMap_for_BinarySpec<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_BinarySpec->db_config= "<<(uint32_t)pStaticDataMap_for_BinarySpec->db_config<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*range->start= "<<(uint32_t)range->start<<'\n';
#endif
//  for (auto iter = pStaticDataMap_for_BinarySpec->map.lower_bound(range->start); iter != pStaticDataMap_for_BinarySpec->map.end() &&
////             range.Contains(iter->first);
//       Contains_in_Range(range, iter->first); iter++)
//  {
//    iter->second.config_in_StaticDataCell.eEventConfig.clazz = clazz;
//  }

  uint16_t next_index = KeyMap2IndexMass_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, range->start);
#ifdef  LOG_INFO
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*assign_class_in_StaticDataMap_for_BinarySpecOver2_2"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint16_t next_index= "<<next_index<<'\n';
#endif

  while((next_index < MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec)) &&
        Contains_in_Range(range, KeyMap2IndexMass_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, next_index)))
  {
    pStaticDataMap_for_BinarySpec->map[next_index].config_in_StaticDataCell.eEventConfig.clazz = clazz;
    next_index++;
  }

//Range get_full_range_in_StaticDataMap_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec);
//Range Intersection_in_Range(Range *pRange, Range* other);
////    return range.Intersection(this->get_full_range());
  Range temp = get_full_range_in_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec);

#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}assign_class_in_StaticDataMap_for_BinarySpecOver2__"<<'\n';
  decrement_stack_info();
#endif
  return Intersection_in_Range(range, &temp);
}

int iterator_operatorPlusPlus_for_BinarySpec(StaticDataMap_for_BinarySpec *pStaticDataMap_for_BinarySpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_BinarySpec = false;
  pStaticDataMap_for_BinarySpec->map[i].selection_in_StaticDataCell_for_Binary.selected_in_SelectedValue_for_BinarySpec = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_BinarySpec(pStaticDataMap_for_BinarySpec);
    }

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"*operator++1"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
#endif
    // shorten the range
////        this->range.start = iter->first;
//    pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.start = i;
    pStaticDataMap_for_BinarySpec->selected_in_StaticDataMap_for_BinarySpec.start = 
                   IndexMass2KeyMap_for_BinarySpec(pStaticDataMap_for_BinarySpec->db_config, i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_BinarySpec)
    if ( pStaticDataMap_for_BinarySpec->map[i].selection_in_StaticDataCell_for_Binary.selected_in_SelectedValue_for_BinarySpec)
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
}
