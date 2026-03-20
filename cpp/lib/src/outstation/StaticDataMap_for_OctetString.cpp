#include "log_info.h"

#include "header_dnp3.h"
#include "StaticDataMap.h"
#include "StaticDataMap_for_OctetString.h"

uint16_t MapSize_for_StaticDataMap_for_OctetStringSpec(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec)
{
  return pStaticDataMap_for_OctetStringSpec->db_config->octet_string_count;
}

void StaticDataMap_for_OctetString_in_StaticDataMap_for_OctetStringOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap)
{
  Range_in_RangeOver1(&(pStaticDataMap->selected));
}
////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_OctetStringSpec_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap, std::map<uint16_t, OctetStringConfig>& config)
void StaticDataMap_for_OctetStringSpec_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"StaticDataMap_for_OctetStringSpec_in_StaticDataMap_for_OctetStringSpecOver2_1"<<'\n';
#endif

  StaticDataMap_for_OctetString_in_StaticDataMap_for_OctetStringOver1(pStaticDataMap);
  pStaticDataMap->db_config = config;

//  for (const auto& item : config)
  for (int i=0; i<MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_OctetString_in_StaticDataCell_for_OctetStringOver1(StaticDataCell_for_OctetString *pStaticDataCell_for_OctetString,
//    OctetStringConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    OctetStringConfig temp = item.second;
    OctetStringConfig temp = pStaticDataMap->db_config->octet_string_config[i];
    StaticDataCell_for_OctetString sStaticDataCell_for_OctetString;
    StaticDataCell_for_OctetString_in_StaticDataCell_for_OctetStringOver2(&sStaticDataCell_for_OctetString, &temp);
//    pStaticDataMap->map[item.first] = sStaticDataCell_for_OctetString;
    pStaticDataMap->map[i] = sStaticDataCell_for_OctetString;
  }
#ifdef  LOG_INFO
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_OctetStringSpec(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec)
{
  return pStaticDataMap_for_OctetStringSpec->selected;
}
/*
typename StaticDataMap_for_OctetStringSpec::iterator StaticDataMap_for_OctetStringSpec::begin()
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!this->selected.IsValid())
  if (!IsValid_in_Range(&(this->selected)))
  {
    return iterator(this->map.end(), this->map.end(), this->selected);
  }

  const auto begin = this->map.lower_bound(this->selected.start);

  return iterator(begin, this->map.end(), this->selected);
}
*/
////template<class Spec> void StaticDataMap<Spec>::clear_selection()
void clear_selection_in_StaticDataMap_for_OctetStringSpec(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec)
{
  // the act of iterating clears the selection
//  for (auto iter = pStaticDataMap_for_OctetStringSpec->begin(); iter != pStaticDataMap_for_OctetStringSpec->end(); ++iter)
//  {
//  }
  Range_in_RangeOver1(&(pStaticDataMap_for_OctetStringSpec->selected));
}
/*
////template<class Spec> typename StaticDataMap<Spec>::iterator StaticDataMap<Spec>::end()
typename StaticDataMap_for_OctetStringSpec::iterator StaticDataMap_for_OctetStringSpec::end()
{
  return iterator(this->map.end(), this->map.end(), this->selected);
}
*/
////template<class Spec>
////typename Spec::static_variation_t check_for_promotion(const typename Spec::meas_t& value,
////                                                      typename Spec::static_variation_t variation)
StaticOctetStringVariation_uint8_t check_for_promotion_for_OctetStringSpec_static(OctetString* value, StaticOctetStringVariation_uint8_t variation)
{
  UNUSED(value);
  return variation;
}

StaticOctetStringVariation_uint8_t get_variation_in_StaticDataMap_for_OctetStringSpecOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index);
StaticOctetStringVariation_uint8_t get_variation_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index);

StaticOctetStringVariation_uint8_t get_variation_in_StaticDataMap_for_OctetStringSpecOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index)
{
  return pStaticDataMap_for_OctetStringSpec->map[index].config_in_StaticDataCell.eEventConfig.svariation;
}

StaticOctetStringVariation_uint8_t get_variation_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index)
{
  UNUSED(pStaticDataMap_for_OctetStringSpec);
  UNUSED(index);
  StaticOctetStringVariation_uint8_t *var = (StaticOctetStringVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_OctetStringSpecOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec)
{
////  return select_all_in_StaticDataMap_for_OctetStringSpecOver3(pStaticDataMap_for_OctetStringSpec, [](auto var) {
////    return var;
////  }); // use the default
  return select_all_in_StaticDataMap_for_OctetStringSpecOver3(pStaticDataMap_for_OctetStringSpec, get_variation_in_StaticDataMap_for_OctetStringSpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, StaticOctetStringVariation_uint8_t variation)
{
////  return select_all_in_StaticDataMap_for_OctetStringSpecOver3(pStaticDataMap_for_OctetStringSpec, [variation](auto var) {
////    return variation;
////  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_OctetStringSpecOver3(pStaticDataMap_for_OctetStringSpec, get_variation_in_StaticDataMap_for_OctetStringSpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_OctetStringSpecOver3(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec,
    StaticOctetStringVariation_uint8_t (*get_variation)(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index)
                                                                 ) //, F get_variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"select_all_in_StaticDataMap_for_OctetStringSpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_OctetStringSpec= "<<(uint32_t)pStaticDataMap_for_OctetStringSpec<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_OctetStringSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_OctetStringSpec->selected.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_OctetStringSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_OctetStringSpec->selected.stop<<'\n';
#endif

//  if (pStaticDataMap_for_OctetStringSpec->map.empty())
  if (MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_OctetStringSpecOver3_2"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_OctetStringSpec->selected = From_in_Range_static(pStaticDataMap_for_OctetStringSpec->map.begin()->first,
//        pStaticDataMap_for_OctetStringSpec->map.rbegin()->first);
    pStaticDataMap_for_OctetStringSpec->selected =
      From_in_Range_static(IndexMass2KeyMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config, 0),
                           IndexMass2KeyMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config,
          MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec)-1));
//             pStaticDataMap_for_OctetStringSpec->db_config->OctetString_input_count-1);
//        pStaticDataMap_for_OctetStringSpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_OctetStringSpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec); i++)
    {
// StaticOctetStringVariation_uint8_t check_for_promotion_for_OctetStringSpec(OctetString* value, StaticOctetStringVariation_uint8_t variation);
//void SelectedValue_for_OctetStringSpec_in_SelectedValue_for_OctetStringSpecOver2(SelectedValue_for_OctetStringSpec *pSelectedValue_for_OctetStringSpec,
//                                          boolean selected, OctetString* value, StaticOctetStringVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_OctetStringSpec sSelectedValue_for_OctetStringSpec;
      SelectedValue_for_OctetStringSpec_in_SelectedValue_for_OctetStringSpecOver2(&sSelectedValue_for_OctetStringSpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_OctetStringSpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_OctetStringSpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_OctetStringSpec_static(&(pStaticDataMap_for_OctetStringSpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_OctetStringSpec, i)));

#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"select_all_in_StaticDataMap_for_OctetStringSpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_OctetStringSpec.variation= "<<(uint16_t)sSelectedValue_for_OctetStringSpec.variation<<'\n';
//  std::cout<<"*"<<getString_stack_info();
//  std::cout<<"*iter.second.config.eEventConfig.svariation= "<<(uint16_t)iter.second.config_in_StaticDataCell.eEventConfig.svariation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_OctetStringSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_OctetStringSpec->selected.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_OctetStringSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_OctetStringSpec->selected.stop<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_OctetString = sSelectedValue_for_OctetStringSpec;
      pStaticDataMap_for_OctetStringSpec->map[i].selection_in_StaticDataCell = sSelectedValue_for_OctetStringSpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_OctetStringSpecOver3_4"<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_OctetStringSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_OctetStringSpec->selected.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_OctetStringSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_OctetStringSpec->selected.stop<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_OctetStringSpec->map.size();
    return MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec);
  }
}

StaticOctetStringVariation_uint8_t get_variation_in_in_StaticDataMap_for_OctetStringSpecOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index);
StaticOctetStringVariation_uint8_t get_variation_in_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index);

StaticOctetStringVariation_uint8_t get_variation_in_in_StaticDataMap_for_OctetStringSpecOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index)
{
  return pStaticDataMap_for_OctetStringSpec->map[index].config_in_StaticDataCell.eEventConfig.svariation;
}

StaticOctetStringVariation_uint8_t get_variation_in_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index)
{
  UNUSED(pStaticDataMap_for_OctetStringSpec);
  UNUSED(index);
  StaticOctetStringVariation_uint8_t *var = (StaticOctetStringVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_OctetStringSpecOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
//  return select_in_StaticDataMap_for_OctetStringSpecOver5(pStaticDataMap_for_OctetStringSpec, range, [](auto var) {
//    return var;
//  }); // use the default
  return select_in_StaticDataMap_for_OctetStringSpecOver5(pStaticDataMap_for_OctetStringSpec, range, get_variation_in_in_StaticDataMap_for_OctetStringSpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, uint16_t index, StaticOctetStringVariation_uint8_t variation)
{
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_OctetStringSpecOver4(pStaticDataMap_for_OctetStringSpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_OctetStringSpecOver3(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, uint16_t index)
{
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_OctetStringSpecOver1(pStaticDataMap_for_OctetStringSpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_OctetStringSpecOver4(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, Range range, StaticOctetStringVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
//  return select_in_StaticDataMap_for_OctetStringSpecOver5(pStaticDataMap_for_OctetStringSpec, range, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_OctetStringSpecOver5(pStaticDataMap_for_OctetStringSpec, range, get_variation_in_in_StaticDataMap_for_OctetStringSpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_OctetStringSpecOver5(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, Range range,
    StaticOctetStringVariation_uint8_t (*get_variation)(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int index))
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config, range.start);

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec))
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
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config, iter);
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
    OctetString tOctetString = pStaticDataMap_for_OctetStringSpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_OctetStringSpec sSelectedValue_for_OctetStringSpec = {
      true, tOctetString,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_OctetStringSpec_static(&tOctetString,
          get_variation(pStaticDataMap_for_OctetStringSpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_OctetStringSpec->map[iter].selection_in_StaticDataCell = sSelectedValue_for_OctetStringSpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_OctetStringSpec->selected = Union_in_Range(&(pStaticDataMap_for_OctetStringSpec->selected), &rRange);

  return count;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_OctetStringSpec(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_OctetStringSpec->selected));
}

boolean add_in_StaticDataMap_for_OctetStringSpec(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, OctetString *value, uint16_t index, OctetStringConfig *config)
{
//  if (pStaticDataMap_for_OctetStringSpec->map.find(index) != pStaticDataMap_for_OctetStringSpec->map.end())
  index = KeyMap2IndexMass_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config, index);
  if (index >= MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec))
  {
    return false;
  }

//void  StaticDataCell_for_OctetString_in_StaticDataCell_for_OctetStringOver3(StaticDataCell_for_OctetString *pStaticDataCell_for_OctetString,
//    OctetString* value,
//    OctetStringConfig* config);
  StaticDataCell_for_OctetString sStaticDataCell;
  StaticDataCell_for_OctetString_in_StaticDataCell_for_OctetStringOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_OctetStringSpec->map[index] = sStaticDataCell;////StaticDataCell_for_OctetStringSpec{value, config};

  return true;
}

boolean update_in_StaticDataMap_for_OctetStringSpecOver1(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec,
    OctetString* value,
    uint16_t index,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
//boolean update_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec,
//    map_iter_t_StaticDataMap_for_OctetStringSpec & iter,
//    OctetString* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////    return update(this->map.find(index), value, mode, receiver);
//  map_iter_t_StaticDataMap_for_OctetStringSpec  iter = pStaticDataMap_for_OctetStringSpec->map.find(index);
  return update_in_StaticDataMap_for_OctetStringSpecOver2(pStaticDataMap_for_OctetStringSpec,
         index, value, mode, receiver);
}

boolean update_in_StaticDataMap_for_OctetStringSpecOver2(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec,
//    map_iter_t_StaticDataMap_for_OctetStringSpec & iter,
    uint16_t keyMap,
    OctetString* new_value,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{update_in_StaticDataMap_for_OctetStringSpecOver2_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint16_t keyMap= "<<keyMap<<'\n';
#endif
//  if (iter == pStaticDataMap_for_OctetStringSpec->map.end())
  uint16_t index = KeyMap2IndexMass_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config, keyMap);
  if(index >= MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec))
  {
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}update_in_StaticDataMap_for_OctetStringSpecOver2_1_"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint16_t index= "<<index<<'\n';
  decrement_stack_info();
#endif
    return false;
  }

  if (mode != EventMode_EventOnly)
  {
//    iter->second.value_in_StaticDataCell = *new_value;
    pStaticDataMap_for_OctetStringSpec->map[index].value_in_StaticDataCell = *new_value;
  }

//  OctetString old_value = iter->second.event_in_StaticDataCell.eEventCellBase_for_OctetString.lastEvent;
  OctetString old_value = pStaticDataMap_for_OctetStringSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_OctetString.lastEvent;

  if (mode == EventMode_Force || mode == EventMode_EventOnly ||
//boolean IsEvent_in_OctetStringSpec_static(OctetString *old_value, OctetString *new_value, OctetStringConfig *config);
////        Spec::IsEvent(iter->second.event.lastEvent, new_value, iter->second.config))
//      IsEvent_in_OctetStringSpec_static(&old_value, new_value, &(iter->second.config_in_StaticDataCell)))
      IsEvent_in_OctetStringSpec_static(&old_value, new_value, &(pStaticDataMap_for_OctetStringSpec->map[index].config_in_StaticDataCell)))
  {
//    iter->second.event_in_StaticDataCell.eEventCellBase_for_OctetString.lastEvent = *new_value;
    pStaticDataMap_for_OctetStringSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_OctetString.lastEvent = *new_value;
    if (mode != EventMode_Suppress)
    {
      EventClass_uint8_t ec;
//boolean convert_to_event_class_in_StaticDataMap_static(PointClass_uint8_t pc, EventClass_uint8_t* ec);
////            if (convert_to_event_class(iter->second.config.clazz, ec))
//      if (convert_to_event_class_in_StaticDataMap_static(iter->second.config_in_StaticDataCell.eEventConfig.clazz, &ec))
      if (convert_to_event_class_in_StaticDataMap_static(pStaticDataMap_for_OctetStringSpec->map[index].config_in_StaticDataCell.eEventConfig.clazz, &ec))
      {
//void Event_for_OctetStringSpec_in_Event_for_OctetStringSpecOver2(Event_for_OctetStringSpec *pEvent_for_OctetStringSpec,
//    OctetString* value, uint16_t index,
//    EventClass_uint8_t clazz,
//    event_variation_t_in_OctetStringInfo variation);
//void Update_OctetStringSpec_in_IEventReceiver(IEventReceiver *, Event_for_OctetStringSpec* evt);
////                receiver.Update(Event<Spec>(new_value, iter->first, ec, iter->second.config.evariation));
        Event_for_OctetStringSpec eEvent_for_OctetStringSpec;
        Event_for_OctetStringSpec_in_Event_for_OctetStringSpecOver2(&eEvent_for_OctetStringSpec,
            new_value,
//            iter->first,
            IndexMass2KeyMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config, index),
             ec,
//            iter->second.config_in_StaticDataCell.eEventConfig.evariation
            pStaticDataMap_for_OctetStringSpec->map[index].config_in_StaticDataCell.eEventConfig.evariation);
        Update_OctetStringSpec_in_IEventReceiver(receiver, &eEvent_for_OctetStringSpec);

      }
    }
  }

#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}update_in_StaticDataMap_for_OctetStringSpecOver2_2_"<<'\n';
  decrement_stack_info();
#endif
  return true;
}

int iterator_operatorPlusPlus_for_OctetStringSpec(StaticDataMap_for_OctetStringSpec *pStaticDataMap_for_OctetStringSpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_OctetStringSpec = false;
  pStaticDataMap_for_OctetStringSpec->map[i].selection_in_StaticDataCell.selected = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_OctetStringSpec->selected = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec);
    }

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"*operator++1"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
#endif
    // shorten the range
////        this->range.start = iter->first;
//    pStaticDataMap_for_OctetStringSpec->selected_in_StaticDataMap_for_OctetStringSpec.start = i;
    pStaticDataMap_for_OctetStringSpec->selected.start = 
                     IndexMass2KeyMap_for_OctetStringSpec(pStaticDataMap_for_OctetStringSpec->db_config, i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_OctetStringSpec)
    if ( pStaticDataMap_for_OctetStringSpec->map[i].selection_in_StaticDataCell.selected)
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
