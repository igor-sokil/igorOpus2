#include "log_info.h"

#include "header_dnp3.h"
#include "StaticDataMap_for_FrozenCounter.h"

uint16_t MapSize_for_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec)
{
  return pStaticDataMap_for_FrozenCounterSpec->db_config->frozen_counter_count;
}

void setMapSize_DatabaseConfig_for_FrozenCounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t db_size)
{
  pDatabaseConfig->frozen_counter_count = db_size;
}

void StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap)
{
  Range_in_RangeOver1(&(pStaticDataMap->selected));
}
////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap, std::map<uint16_t, FrozenCounterConfig>& config)
void StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver2_1"<<'\n';
#endif

  StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver1(pStaticDataMap);
  pStaticDataMap->db_config = config;

//  for (const auto& item : config)
  for (int i=0; i<MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_FrozenCounter_in_StaticDataCell_for_FrozenCounterOver1(StaticDataCell_for_FrozenCounter *pStaticDataCell_for_FrozenCounter,
//    FrozenCounterConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    FrozenCounterConfig temp = item.second;
    FrozenCounterConfig temp = pStaticDataMap->db_config->frozen_counter_config[i];
    StaticDataCell_for_FrozenCounter sStaticDataCell_for_FrozenCounter;
    StaticDataCell_for_FrozenCounter_in_StaticDataCell_for_FrozenCounterOver2(&sStaticDataCell_for_FrozenCounter, &temp);
//    pStaticDataMap->map[item.first] = sStaticDataCell_for_FrozenCounter;
    pStaticDataMap->map[i] = sStaticDataCell_for_FrozenCounter;
  }
#ifdef  LOG_INFO
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec)
{
  return pStaticDataMap_for_FrozenCounterSpec->selected;
}
/*
typename StaticDataMap_for_FrozenCounterSpec::iterator StaticDataMap_for_FrozenCounterSpec::begin()
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
void clear_selection_in_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec)
{
  // the act of iterating clears the selection
//  for (auto iter = pStaticDataMap_for_FrozenCounterSpec->begin(); iter != pStaticDataMap_for_FrozenCounterSpec->end(); ++iter)
//  {
//  }
  Range_in_RangeOver1(&(pStaticDataMap_for_FrozenCounterSpec->selected));
}
/*
////template<class Spec> typename StaticDataMap<Spec>::iterator StaticDataMap<Spec>::end()
typename StaticDataMap_for_FrozenCounterSpec::iterator StaticDataMap_for_FrozenCounterSpec::end()
{
  return iterator(this->map.end(), this->map.end(), this->selected);
}
*/
////template<class Spec>
////typename Spec::static_variation_t check_for_promotion(const typename Spec::meas_t& value,
////                                                      typename Spec::static_variation_t variation)
StaticFrozenCounterVariation_uint8_t check_for_promotion_for_FrozenCounterSpec_static(FrozenCounter* value, StaticFrozenCounterVariation_uint8_t variation)
{
  UNUSED(value);
  return variation;
}

StaticFrozenCounterVariation_uint8_t get_variation_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index);
StaticFrozenCounterVariation_uint8_t get_variation_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index);

StaticFrozenCounterVariation_uint8_t get_variation_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index)
{
  return pStaticDataMap_for_FrozenCounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.svariation;
}
StaticFrozenCounterVariation_uint8_t get_variation_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index)
{
  UNUSED(pStaticDataMap_for_FrozenCounterSpec);
  UNUSED(index);
  StaticBinaryVariation_uint8_t *var = (StaticFrozenCounterVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec)
{
//  return select_all_in_StaticDataMap_for_FrozenCounterSpecOver3(pStaticDataMap_for_FrozenCounterSpec, [](auto var) {
//    return var;
//  }); // use the default
  return select_all_in_StaticDataMap_for_FrozenCounterSpecOver3(pStaticDataMap_for_FrozenCounterSpec, get_variation_in_StaticDataMap_for_FrozenCounterSpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, StaticFrozenCounterVariation_uint8_t variation)
{
//  return select_all_in_StaticDataMap_for_FrozenCounterSpecOver3(pStaticDataMap_for_FrozenCounterSpec, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_FrozenCounterSpecOver3(pStaticDataMap_for_FrozenCounterSpec, get_variation_in_StaticDataMap_for_FrozenCounterSpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_FrozenCounterSpecOver3(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec,
    StaticFrozenCounterVariation_uint8_t (*get_variation)(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index)
                                                               ) //, F get_variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"select_all_in_StaticDataMap_for_FrozenCounterSpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_FrozenCounterSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_FrozenCounterSpec->selected.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_FrozenCounterSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_FrozenCounterSpec->selected.stop<<'\n';
#endif

//  if (pStaticDataMap_for_FrozenCounterSpec->map.empty())
  if (MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_FrozenCounterSpecOver3_2"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_FrozenCounterSpec->selected = From_in_Range_static(pStaticDataMap_for_FrozenCounterSpec->map.begin()->first,
//        pStaticDataMap_for_FrozenCounterSpec->map.rbegin()->first);
    pStaticDataMap_for_FrozenCounterSpec->selected = //From_in_Range_static(//0,//pStaticDataMap_for_FrozenCounterSpec->map.begin()->first,
      From_in_Range_static(IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, 0),
                           IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config,
               MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec)-1));
//             pStaticDataMap_for_FrozenCounterSpec->db_config->FrozenCounter_input_count-1);
//        pStaticDataMap_for_FrozenCounterSpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_FrozenCounterSpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec); i++)
    {
// StaticFrozenCounterVariation_uint8_t check_for_promotion_for_FrozenCounterSpec(FrozenCounter* value, StaticFrozenCounterVariation_uint8_t variation);
//void SelectedValue_for_FrozenCounterSpec_in_SelectedValue_for_FrozenCounterSpecOver2(SelectedValue_for_FrozenCounterSpec *pSelectedValue_for_FrozenCounterSpec,
//                                          boolean selected, FrozenCounter* value, StaticFrozenCounterVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_FrozenCounterSpec sSelectedValue_for_FrozenCounterSpec;
      SelectedValue_for_FrozenCounterSpec_in_SelectedValue_for_FrozenCounterSpecOver2(&sSelectedValue_for_FrozenCounterSpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_FrozenCounterSpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_FrozenCounterSpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_FrozenCounterSpec_static(&(pStaticDataMap_for_FrozenCounterSpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_FrozenCounterSpec, i)));

#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"select_all_in_StaticDataMap_for_FrozenCounterSpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_FrozenCounterSpec.variation= "<<(uint16_t)sSelectedValue_for_FrozenCounterSpec.variation<<'\n';
//  std::cout<<"*"<<getString_stack_info();
//  std::cout<<"*iter.second.config.eEventConfig.svariation= "<<(uint16_t)iter.second.config_in_StaticDataCell.eEventConfig.svariation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_FrozenCounterSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_FrozenCounterSpec->selected.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_FrozenCounterSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_FrozenCounterSpec->selected.stop<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_FrozenCounter = sSelectedValue_for_FrozenCounterSpec;
      pStaticDataMap_for_FrozenCounterSpec->map[i].selection_in_StaticDataCell = sSelectedValue_for_FrozenCounterSpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_FrozenCounterSpecOver3_4"<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_FrozenCounterSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_FrozenCounterSpec->selected.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_FrozenCounterSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_FrozenCounterSpec->selected.stop<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_FrozenCounterSpec->map.size();
    return MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec);
  }
}

StaticFrozenCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index);
StaticFrozenCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index);

StaticFrozenCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index)
{
  return pStaticDataMap_for_FrozenCounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.svariation;
}
StaticFrozenCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index)
{
  UNUSED(pStaticDataMap_for_FrozenCounterSpec);
  UNUSED(index);
  StaticFrozenCounterVariation_uint8_t *var = (StaticFrozenCounterVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
//  return select_in_StaticDataMap_for_FrozenCounterSpecOver5(pStaticDataMap_for_FrozenCounterSpec, range, [](auto var) {
//    return var;
//  }); // use the default
  return select_in_StaticDataMap_for_FrozenCounterSpecOver5(pStaticDataMap_for_FrozenCounterSpec, range, get_variation_in_in_StaticDataMap_for_FrozenCounterSpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, uint16_t index, StaticFrozenCounterVariation_uint8_t variation)
{
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_FrozenCounterSpecOver4(pStaticDataMap_for_FrozenCounterSpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_FrozenCounterSpecOver3(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, uint16_t index)
{
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_FrozenCounterSpecOver1(pStaticDataMap_for_FrozenCounterSpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_FrozenCounterSpecOver4(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, Range range, StaticFrozenCounterVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
//  return select_in_StaticDataMap_for_FrozenCounterSpecOver5(pStaticDataMap_for_FrozenCounterSpec, range, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_FrozenCounterSpecOver5(pStaticDataMap_for_FrozenCounterSpec, range, get_variation_in_in_StaticDataMap_for_FrozenCounterSpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_FrozenCounterSpecOver5(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, Range range,
    StaticFrozenCounterVariation_uint8_t (*get_variation)(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int index))
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, range.start);

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec))
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
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, iter);
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
    FrozenCounter fFrozenCounter = pStaticDataMap_for_FrozenCounterSpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_FrozenCounterSpec sSelectedValue_for_FrozenCounterSpec = {
      true, fFrozenCounter,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_FrozenCounterSpec_static(&fFrozenCounter,
          get_variation(pStaticDataMap_for_FrozenCounterSpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_FrozenCounterSpec->map[iter].selection_in_StaticDataCell = sSelectedValue_for_FrozenCounterSpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_FrozenCounterSpec->selected = Union_in_Range(&(pStaticDataMap_for_FrozenCounterSpec->selected), &rRange);

  return count;
}

boolean update_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec,
    FrozenCounter* value,
    uint16_t index,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
//boolean update_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec,
//    map_iter_t_StaticDataMap_for_FrozenCounterSpec & iter,
//    FrozenCounter* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////    return update(this->map.find(index), value, mode, receiver);
//  map_iter_t_StaticDataMap_for_FrozenCounterSpec  iter = pStaticDataMap_for_FrozenCounterSpec->map.find(index);
  return update_in_StaticDataMap_for_FrozenCounterSpecOver2(pStaticDataMap_for_FrozenCounterSpec,
         index, value, mode, receiver);
}

boolean update_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec,
//    map_iter_t_StaticDataMap_for_FrozenCounterSpec & iter,
    uint16_t keyMap,
    FrozenCounter* new_value,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
//  if (iter == pStaticDataMap_for_FrozenCounterSpec->map.end())
  uint16_t index = KeyMap2IndexMass_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, keyMap);
  if(index >= MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec))
  {
    return false;
  }

  if (mode != EventMode_EventOnly)
  {
//    iter->second.value_in_StaticDataCell = *new_value;
    pStaticDataMap_for_FrozenCounterSpec->map[index].value_in_StaticDataCell = *new_value;
  }

//  FrozenCounter old_value = iter->second.event_in_StaticDataCell.eEventCellBase_for_FrozenCounter.lastEvent;
  FrozenCounter old_value = pStaticDataMap_for_FrozenCounterSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_FrozenCounter.lastEvent;
  if (mode == EventMode_Force || mode == EventMode_EventOnly ||
//boolean IsEvent_in_FrozenCounterSpec_static(FrozenCounter *old_value, FrozenCounter *new_value, FrozenCounterConfig *config);
////        Spec::IsEvent(iter->second.event.lastEvent, new_value, iter->second.config))
//      IsEvent_in_FrozenCounterSpec_static(&old_value, new_value, &(iter->second.config_in_StaticDataCell)))
      IsEvent_in_FrozenCounterSpec_static(&old_value, new_value, &(pStaticDataMap_for_FrozenCounterSpec->map[index].config_in_StaticDataCell)))
  {
//    iter->second.event_in_StaticDataCell.eEventCellBase_for_FrozenCounter.lastEvent = *new_value;
    pStaticDataMap_for_FrozenCounterSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_FrozenCounter.lastEvent = *new_value;
    if (mode != EventMode_Suppress)
    {
      EventClass_uint8_t ec;
//boolean convert_to_event_class_in_StaticDataMap_static(PointClass_uint8_t pc, EventClass_uint8_t* ec);
////            if (convert_to_event_class(iter->second.config.clazz, ec))
//      if (convert_to_event_class_in_StaticDataMap_static(iter->second.config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.clazz, &ec))
      if (convert_to_event_class_in_StaticDataMap_static(pStaticDataMap_for_FrozenCounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.clazz, &ec))
      {
//void Event_for_FrozenCounterSpec_in_Event_for_FrozenCounterSpecOver2(Event_for_FrozenCounterSpec *pEvent_for_FrozenCounterSpec,
//    FrozenCounter* value, uint16_t index,
//    EventClass_uint8_t clazz,
//    event_variation_t_in_FrozenCounterInfo variation);
//void Update_FrozenCounterSpec_in_IEventReceiver(IEventReceiver *, Event_for_FrozenCounterSpec* evt);
////                receiver.Update(Event<Spec>(new_value, iter->first, ec, iter->second.config.evariation));
        Event_for_FrozenCounterSpec eEvent_for_FrozenCounterSpec;
        Event_for_FrozenCounterSpec_in_Event_for_FrozenCounterSpecOver2(&eEvent_for_FrozenCounterSpec,
            new_value,
//            iter->first,
            IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, index),
            ec,
//            iter->second.config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.evariation);
            pStaticDataMap_for_FrozenCounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.evariation);
        Update_FrozenCounterSpec_in_IEventReceiver(receiver, &eEvent_for_FrozenCounterSpec);

      }
    }
  }

  return true;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_FrozenCounterSpec->selected));
}

boolean add_in_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, FrozenCounter *value, uint16_t index, FrozenCounterConfig *config)
{
//  if (pStaticDataMap_for_FrozenCounterSpec->map.find(index) != pStaticDataMap_for_FrozenCounterSpec->map.end())
  index = KeyMap2IndexMass_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, index);
  if (index >= MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec))
  {
    return false;
  }

//void  StaticDataCell_for_FrozenCounter_in_StaticDataCell_for_FrozenCounterOver3(StaticDataCell_for_FrozenCounter *pStaticDataCell_for_FrozenCounter,
//    FrozenCounter* value,
//    FrozenCounterConfig* config);
  StaticDataCell_for_FrozenCounter sStaticDataCell;
  StaticDataCell_for_FrozenCounter_in_StaticDataCell_for_FrozenCounterOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_FrozenCounterSpec->map[index] = sStaticDataCell;////StaticDataCell_for_FrozenCounterSpec{value, config};

  return true;
}

boolean modify_in_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec,
    uint16_t start, uint16_t stop, uint8_t flags,
    IEventReceiver* receiver)
{
  if (stop < start)
  {
    return false;
  }

  uint16_t iter = KeyMap2IndexMass_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, stop);
  if (iter >= MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec))
  {
    return false;
  }
  iter = KeyMap2IndexMass_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, start);
  if (iter >= MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec))
  {
    return false;
  }

//  for (auto iter = pStaticDataMap_for_FrozenCounterSpec->map.lower_bound(start); iter != pStaticDataMap_for_FrozenCounterSpec->map.end(); ++iter)
  for (; iter != MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec); ++iter)
  {
//    if (iter->first > stop)
    if(IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, iter) > stop)
    {
      return true;//false;
    }

//    FrozenCounter new_value = iter->second.value_in_StaticDataCell;
    FrozenCounter new_value = pStaticDataMap_for_FrozenCounterSpec->map[iter].value_in_StaticDataCell;
////        new_value.flags = Flags(flags);
    Flags fFlags;
    Flags_In_FlagsOver2(&fFlags, flags);
    new_value.tTypedMeasurement_for_Uint32.mMeasurement.flags = fFlags;
//boolean update_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec,
//    map_iter_t_StaticDataMap_for_FrozenCounterSpec & iter,
//    FrozenCounter* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////        this->update(iter, new_value, EventMode::Detect, receiver);
    update_in_StaticDataMap_for_FrozenCounterSpecOver2(pStaticDataMap_for_FrozenCounterSpec,
        IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, iter),
        &new_value,
        EventMode_Detect,
        receiver);
  }

  return true;
}

////template<class Spec> Range StaticDataMap<Spec>::get_full_range() const
Range get_full_range_in_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec)
{
//Range From_in_Range_static(uint16_t start, uint16_t stop);
//Range Invalid_in_Range_static(void);
////    return this->map.empty() ? Range::Invalid() : Range::From(this->map.begin()->first, this->map.rbegin()->first);
//  return pStaticDataMap_for_FrozenCounterSpec->map.empty() ? Invalid_in_Range_static() :
//         From_in_Range_static(pStaticDataMap_for_FrozenCounterSpec->map.begin()->first, pStaticDataMap_for_FrozenCounterSpec->map.rbegin()->first);
  return MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec)==0 ? Invalid_in_Range_static() :
         From_in_Range_static(IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, 0),
                              IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config,
        MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec)-1));
}

////template<class Spec> Range StaticDataMap<Spec>::assign_class(PointClass clazz)
Range assign_class_in_StaticDataMap_for_FrozenCounterSpecOver1(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, PointClass_uint8_t clazz)
{
//  for (auto& elem : pStaticDataMap_for_FrozenCounterSpec->map)
//  {
//    elem.second.config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.clazz = clazz;
//  }

  uint16_t  next_index = 0;
  while(next_index < MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec))
  {
    pStaticDataMap_for_FrozenCounterSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

////    return this->get_full_range();
  return get_full_range_in_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec);
}

Range assign_class_in_StaticDataMap_for_FrozenCounterSpecOver2(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, PointClass_uint8_t clazz, Range* range)
{
//  for (auto iter = pStaticDataMap_for_FrozenCounterSpec->map.lower_bound(range->start); iter != pStaticDataMap_for_FrozenCounterSpec->map.end() &&
////             range.Contains(iter->first);
//       Contains_in_Range(range, iter->first); iter++)
//  {
//    iter->second.config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.clazz = clazz;
//  }

  uint16_t next_index = KeyMap2IndexMass_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, range->start);

  while((next_index < MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec)) &&
        Contains_in_Range(range, KeyMap2IndexMass_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, next_index)))
  {
    pStaticDataMap_for_FrozenCounterSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

//Range get_full_range_in_StaticDataMap_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec);
//Range Intersection_in_Range(Range *pRange, Range* other);
////    return range.Intersection(this->get_full_range());
  Range temp = get_full_range_in_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec);
  return Intersection_in_Range(range, &temp);
}

int iterator_operatorPlusPlus_for_FrozenCounterSpec(StaticDataMap_for_FrozenCounterSpec *pStaticDataMap_for_FrozenCounterSpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_FrozenCounterSpec = false;
  pStaticDataMap_for_FrozenCounterSpec->map[i].selection_in_StaticDataCell.selected = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_FrozenCounterSpec->selected = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec);
    }

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"*operator++1"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
#endif
    // shorten the range
////        this->range.start = iter->first;
//    pStaticDataMap_for_FrozenCounterSpec->selected_in_StaticDataMap_for_FrozenCounterSpec.start = i;
    pStaticDataMap_for_FrozenCounterSpec->selected.start = 
              IndexMass2KeyMap_for_FrozenCounterSpec(pStaticDataMap_for_FrozenCounterSpec->db_config, i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_FrozenCounterSpec)
    if ( pStaticDataMap_for_FrozenCounterSpec->map[i].selection_in_StaticDataCell.selected)
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
