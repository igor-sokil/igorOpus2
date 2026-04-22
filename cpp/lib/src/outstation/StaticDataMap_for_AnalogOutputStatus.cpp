#include "log_info.h"

#include "header_dnp3.h"
#include "StaticDataMap_for_AnalogOutputStatus.h"

uint16_t MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec)
{
  return pStaticDataMap_for_AnalogOutputStatusSpec->db_config->analog_output_status_count;
}

void setMapSize_DatabaseConfig_for_AnalogOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t db_size)
{
  pDatabaseConfig->analog_output_status_count = db_size;
}

void StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap)
{
  Range_in_RangeOver1(&(pStaticDataMap->selected));
}
////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap, std::map<uint16_t, AOStatusConfig>& config)
void StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver2_1"<<'\n';
//  std::cout<<"*"<<getString_stack_info();
//  std::cout<<"*config.size()= "<<config.size()<<'\n';
#endif

  StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(pStaticDataMap);
  pStaticDataMap->db_config = config;

//  for (const auto& item : config)
  for (int i=0; i<MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_AnalogOutputStatus_in_StaticDataCell_for_AnalogOutputStatusOver1(StaticDataCell_for_AnalogOutputStatus *pStaticDataCell_for_AnalogOutputStatus,
//    AnalogOutputStatusConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    AOStatusConfig temp = item.second;
    AOStatusConfig temp = pStaticDataMap->db_config->analog_output_status_config[i];
    StaticDataCell_for_AnalogOutputStatus sStaticDataCell_for_AnalogOutputStatus;
    StaticDataCell_for_AnalogOutputStatus_in_StaticDataCell_for_AnalogOutputStatusOver2(&sStaticDataCell_for_AnalogOutputStatus, &temp);
//    pStaticDataMap->map[item.first] = sStaticDataCell_for_AnalogOutputStatus;
    pStaticDataMap->map[i] = sStaticDataCell_for_AnalogOutputStatus;
  }
#ifdef  LOG_INFO
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec)
{
  return pStaticDataMap_for_AnalogOutputStatusSpec->selected;
}
/*
typename StaticDataMap_for_AnalogOutputStatusSpec::iterator StaticDataMap_for_AnalogOutputStatusSpec::begin()
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
void clear_selection_in_StaticDataMap_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec)
{
  // the act of iterating clears the selection
//  for (auto iter = pStaticDataMap_for_AnalogOutputStatusSpec->begin(); iter != pStaticDataMap_for_AnalogOutputStatusSpec->end(); ++iter)
//  {
//  }
  Range_in_RangeOver1(&(pStaticDataMap_for_AnalogOutputStatusSpec->selected));
}
/*
////template<class Spec> typename StaticDataMap<Spec>::iterator StaticDataMap<Spec>::end()
typename StaticDataMap_for_AnalogOutputStatusSpec::iterator StaticDataMap_for_AnalogOutputStatusSpec::end()
{
  return iterator(this->map.end(), this->map.end(), this->selected);
}
*/
////template<class Spec>
////typename Spec::static_variation_t check_for_promotion(const typename Spec::meas_t& value,
////                                                      typename Spec::static_variation_t variation)
StaticAnalogOutputStatusVariation_uint8_t check_for_promotion_for_AnalogOutputStatusSpec_static(AnalogOutputStatus* value, StaticAnalogOutputStatusVariation_uint8_t variation)
{
  UNUSED(value);
  return variation;
}

StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index);
StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index);

StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index)
{
  return pStaticDataMap_for_AnalogOutputStatusSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.evariation;
}
StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index)
{
  UNUSED(pStaticDataMap_for_AnalogOutputStatusSpec);
  UNUSED(index);
  StaticAnalogVariation_uint8_t *var = (StaticAnalogOutputStatusVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec)
{
//  return select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3(pStaticDataMap_for_AnalogOutputStatusSpec, [](auto var) {
//    return var;
//  }); // use the default
  return select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3(pStaticDataMap_for_AnalogOutputStatusSpec, get_variation_in_StaticDataMap_for_AnalogOutputStatusSpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, StaticAnalogOutputStatusVariation_uint8_t variation)
{
//  return select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3(pStaticDataMap_for_AnalogOutputStatusSpec, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3(pStaticDataMap_for_AnalogOutputStatusSpec, get_variation_in_StaticDataMap_for_AnalogOutputStatusSpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec,
    StaticAnalogOutputStatusVariation_uint8_t (*get_variation)(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index)
                                                                    ) //, F get_variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_AnalogOutputStatusSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_AnalogOutputStatusSpec->selected.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_AnalogOutputStatusSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_AnalogOutputStatusSpec->selected.stop<<'\n';
#endif

//  if (pStaticDataMap_for_AnalogOutputStatusSpec->map.empty())
  if (MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3_1_"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_AnalogOutputStatusSpec->selected = From_in_Range_static(pStaticDataMap_for_AnalogOutputStatusSpec->map.begin()->first,
//        pStaticDataMap_for_AnalogOutputStatusSpec->map.rbegin()->first);
    pStaticDataMap_for_AnalogOutputStatusSpec->selected =
      From_in_Range_static(IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, 0),
                           IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config,
                         MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec)-1));
    //0,//pStaticDataMap_for_AnalogOutputStatusSpec->map.begin()->first,
//        pStaticDataMap_for_AnalogOutputStatusSpec->db_config->AnalogOutputStatus_input_count-1);
//        pStaticDataMap_for_AnalogOutputStatusSpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_AnalogOutputStatusSpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec); i++)
    {
// StaticBinaryVariation_uint8_t check_for_promotion_for_AnalogOutputStatusSpec(AnalogOutputStatus* value, StaticAnalogOutputStatusVariation_uint8_t variation);
//void SelectedValue_for_AnalogOutputStatusSpec_in_SelectedValue_for_AnalogOutputStatusSpecOver2(SelectedValue_for_AnalogOutputStatusSpec *pSelectedValue_for_AnalogOutputStatusSpec,
//                                          boolean selected, AnalogOutputStatus* value, StaticAnalogOutputStatusVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_AnalogOutputStatusSpec sSelectedValue_for_AnalogOutputStatusSpec;
      SelectedValue_for_AnalogOutputStatusSpec_in_SelectedValue_for_AnalogOutputStatusSpecOver2(&sSelectedValue_for_AnalogOutputStatusSpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_AnalogOutputStatusSpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_AnalogOutputStatusSpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_AnalogOutputStatusSpec_static(&(pStaticDataMap_for_AnalogOutputStatusSpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_AnalogOutputStatusSpec, i)));
//                             pStaticDataMap_for_AnalogOutputStatusSpec->map[i].config_in_StaticDataCell.
//              dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.svariation));
//eEventConfig.svariation));

#ifdef  LOG_INFO
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_AnalogOutputStatusSpec.variation= "<<(uint16_t)sSelectedValue_for_AnalogOutputStatusSpec.variation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_AnalogOutputStatusSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_AnalogOutputStatusSpec->selected.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_AnalogOutputStatusSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_AnalogOutputStatusSpec->selected.stop<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*i= "<<i<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_Binary = sSelectedValue_for_AnalogOutputStatusSpec;
      pStaticDataMap_for_AnalogOutputStatusSpec->map[i].selection_in_StaticDataCell = sSelectedValue_for_AnalogOutputStatusSpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_AnalogOutputStatusSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_AnalogOutputStatusSpec->selected.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_AnalogOutputStatusSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_AnalogOutputStatusSpec->selected.stop<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_AnalogOutputStatusSpecOver3_2_"<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_AnalogOutputStatusSpec->map.size();
    return MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec);
  }
}

StaticAnalogOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index);
StaticAnalogOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index);

StaticAnalogOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index)
{
  return pStaticDataMap_for_AnalogOutputStatusSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.svariation;
}
StaticAnalogOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index)
{
  UNUSED(pStaticDataMap_for_AnalogOutputStatusSpec);
  UNUSED(index);
  StaticAnalogOutputStatusVariation_uint8_t *var = (StaticAnalogOutputStatusVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
//  return select_in_StaticDataMap_for_AnalogOutputStatusSpecOver5(pStaticDataMap_for_AnalogOutputStatusSpec, range, [](auto var) {
//    return var;
//  }); // use the default
  return select_in_StaticDataMap_for_AnalogOutputStatusSpecOver5(pStaticDataMap_for_AnalogOutputStatusSpec, range, get_variation_in_in_StaticDataMap_for_AnalogOutputStatusSpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, uint16_t index, StaticAnalogOutputStatusVariation_uint8_t variation)
{
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_AnalogOutputStatusSpecOver4(pStaticDataMap_for_AnalogOutputStatusSpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_AnalogOutputStatusSpecOver3(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, uint16_t index)
{
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(pStaticDataMap_for_AnalogOutputStatusSpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_AnalogOutputStatusSpecOver4(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, Range range, StaticAnalogOutputStatusVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
//  return select_in_StaticDataMap_for_AnalogOutputStatusSpecOver5(pStaticDataMap_for_AnalogOutputStatusSpec, range, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_AnalogOutputStatusSpecOver5(pStaticDataMap_for_AnalogOutputStatusSpec, range, get_variation_in_in_StaticDataMap_for_AnalogOutputStatusSpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_AnalogOutputStatusSpecOver5(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, Range range,
    StaticAnalogOutputStatusVariation_uint8_t (*get_variation)(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int index))
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, range.start);

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec))
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
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, iter);
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
    AnalogOutputStatus aAnalogOutputStatus = pStaticDataMap_for_AnalogOutputStatusSpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_AnalogOutputStatusSpec sSelectedValue_for_AnalogOutputStatusSpec = {
      true, aAnalogOutputStatus,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_AnalogOutputStatusSpec_static(&aAnalogOutputStatus,
          get_variation(pStaticDataMap_for_AnalogOutputStatusSpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_AnalogOutputStatusSpec->map[iter].selection_in_StaticDataCell = sSelectedValue_for_AnalogOutputStatusSpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_AnalogOutputStatusSpec->selected = Union_in_Range(&(pStaticDataMap_for_AnalogOutputStatusSpec->selected), &rRange);

  return count;
}

boolean update_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec,
    AnalogOutputStatus* value,
    uint16_t index,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
//boolean update_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec,
//    map_iter_t_StaticDataMap_for_AnalogOutputStatusSpec & iter,
//    AnalogOutputStatus* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////    return update(this->map.find(index), value, mode, receiver);
//  map_iter_t_StaticDataMap_for_AnalogOutputStatusSpec  iter = pStaticDataMap_for_AnalogOutputStatusSpec->map.find(index);
  return update_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(pStaticDataMap_for_AnalogOutputStatusSpec,
         index, value, mode, receiver);
}

boolean update_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec,
////    map_iter_t_StaticDataMap_for_AnalogOutputStatusSpec & iter,
    uint16_t keyMap,
    AnalogOutputStatus* new_value,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
////  if (iter == pStaticDataMap_for_AnalogOutputStatusSpec->map.end())
  uint16_t index = KeyMap2IndexMass_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, keyMap);
  if(index >= MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec))
  {
    return false;
  }

  if (mode != EventMode_EventOnly)
  {
////    iter->second.value_in_StaticDataCell = *new_value;
    pStaticDataMap_for_AnalogOutputStatusSpec->map[index].value_in_StaticDataCell = *new_value;
  }

//  AnalogOutputStatus old_value = iter->second.event_in_StaticDataCell.eEventCellBase_for_AnalogOutputStatus.lastEvent;
  AnalogOutputStatus old_value = pStaticDataMap_for_AnalogOutputStatusSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_AnalogOutputStatus.lastEvent;
  if (mode == EventMode_Force || mode == EventMode_EventOnly ||
//boolean IsEvent_in_AnalogOutputStatusSpec_static(AnalogOutputStatus *old_value, AnalogOutputStatus *new_value, AnalogOutputStatusConfig *config);
////        Spec::IsEvent(iter->second.event.lastEvent, new_value, iter->second.config))
//      IsEvent_in_AnalogOutputStatusSpec_static(&old_value, new_value, &(iter->second.config_in_StaticDataCell)))
      IsEvent_in_AnalogOutputStatusSpec_static(&old_value, new_value, &(pStaticDataMap_for_AnalogOutputStatusSpec->map[index].config_in_StaticDataCell)))
  {
////    iter->second.event_in_StaticDataCell.eEventCellBase_for_AnalogOutputStatus.lastEvent = *new_value;
    pStaticDataMap_for_AnalogOutputStatusSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_AnalogOutputStatus.lastEvent = *new_value;
    if (mode != EventMode_Suppress)
    {
      EventClass_uint8_t ec;
//boolean convert_to_event_class_in_StaticDataMap_static(PointClass_uint8_t pc, EventClass_uint8_t* ec);
////            if (convert_to_event_class(iter->second.config.clazz, ec))
//      if (convert_to_event_class_in_StaticDataMap_static(iter->second.config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.clazz, &ec))
      if (convert_to_event_class_in_StaticDataMap_static(pStaticDataMap_for_AnalogOutputStatusSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.clazz, &ec))
      {
//void Event_for_AnalogOutputStatusSpec_in_Event_for_AnalogOutputStatusSpecOver2(Event_for_AnalogOutputStatusSpec *pEvent_for_AnalogOutputStatusSpec,
//    AnalogOutputStatus* value, uint16_t index,
//    EventClass_uint8_t clazz,
//    event_variation_t_in_AnalogOutputStatusInfo variation);
//void Update_AnalogOutputStatusSpec_in_IEventReceiver(IEventReceiver *, Event_for_AnalogOutputStatusSpec* evt);
////                receiver.Update(Event<Spec>(new_value, iter->first, ec, iter->second.config.evariation));
        Event_for_AnalogOutputStatusSpec eEvent_for_AnalogOutputStatusSpec;
        Event_for_AnalogOutputStatusSpec_in_Event_for_AnalogOutputStatusSpecOver2(&eEvent_for_AnalogOutputStatusSpec,
            new_value,
////            iter->first,
            IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, index),
            ec,
////            iter->second.config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.evariation);
            pStaticDataMap_for_AnalogOutputStatusSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.evariation);
        Update_AnalogOutputStatusSpec_in_IEventReceiver(receiver, &eEvent_for_AnalogOutputStatusSpec);

      }
    }
  }

  return true;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_AnalogOutputStatusSpec->selected));
}

boolean add_in_StaticDataMap_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, AnalogOutputStatus *value, uint16_t index, AOStatusConfig *config)
{
//  if (pStaticDataMap_for_AnalogOutputStatusSpec->map.find(index) != pStaticDataMap_for_AnalogOutputStatusSpec->map.end())
  index = KeyMap2IndexMass_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, index);
  if (index >= MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec))
  {
    return false;
  }

//void  StaticDataCell_for_AnalogOutputStatus_in_StaticDataCell_for_AnalogOutputStatusOver3(StaticDataCell_for_AnalogOutputStatus *pStaticDataCell_for_AnalogOutputStatus,
//    AnalogOutputStatus* value,
//    AnalogOutputStatusConfig* config);
  StaticDataCell_for_AnalogOutputStatus sStaticDataCell;
  StaticDataCell_for_AnalogOutputStatus_in_StaticDataCell_for_AnalogOutputStatusOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_AnalogOutputStatusSpec->map[index] = sStaticDataCell;////StaticDataCell_for_AnalogOutputStatusSpec{value, config};

  return true;
}

boolean modify_in_StaticDataMap_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec,
    uint16_t start, uint16_t stop, uint8_t flags,
    IEventReceiver* receiver)
{
  if (stop < start)
  {
    return false;
  }

  uint16_t iter = KeyMap2IndexMass_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, stop);
  if (iter >= MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec))
  {
    return false;
  }
  iter = KeyMap2IndexMass_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, start);
  if (iter >= MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec))
  {
    return false;
  }

//  for (auto iter = pStaticDataMap_for_AnalogOutputStatusSpec->map.lower_bound(start); iter != pStaticDataMap_for_AnalogOutputStatusSpec->map.end(); ++iter)
  for (; iter != MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec); ++iter)
  {
//    if (iter->first > stop)
    if(IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, iter) > stop)
    {
      return true;//false;
    }

//    AnalogOutputStatus new_value = iter->second.value_in_StaticDataCell;
    AnalogOutputStatus new_value = pStaticDataMap_for_AnalogOutputStatusSpec->map[iter].value_in_StaticDataCell;
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
    update_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(pStaticDataMap_for_AnalogOutputStatusSpec,
        IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, iter),
        &new_value,
        EventMode_Detect,
        receiver);
  }

  return true;
}

////template<class Spec> Range StaticDataMap<Spec>::get_full_range() const
Range get_full_range_in_StaticDataMap_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec)
{
//Range From_in_Range_static(uint16_t start, uint16_t stop);
//Range Invalid_in_Range_static(void);
////    return this->map.empty() ? Range::Invalid() : Range::From(this->map.begin()->first, this->map.rbegin()->first);
//  return pStaticDataMap_for_AnalogOutputStatusSpec->map.empty() ? Invalid_in_Range_static() :
//         From_in_Range_static(pStaticDataMap_for_AnalogOutputStatusSpec->map.begin()->first, pStaticDataMap_for_AnalogOutputStatusSpec->map.rbegin()->first);
  Range tmp = MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec)==0 ? Invalid_in_Range_static() :
              From_in_Range_static(IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, 0),
                                   IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config,
                         MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec)-1));
  return tmp;
}

////template<class Spec> Range StaticDataMap<Spec>::assign_class(PointClass clazz)
Range assign_class_in_StaticDataMap_for_AnalogOutputStatusSpecOver1(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, PointClass_uint8_t clazz)
{
//  for (auto& elem : pStaticDataMap_for_AnalogOutputStatusSpec->map)
//  {
//    elem.second.config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.clazz = clazz;
//  }
  uint16_t  next_index = 0;
  while(next_index < MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec))
  {
    pStaticDataMap_for_AnalogOutputStatusSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

////    return this->get_full_range();
  return get_full_range_in_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec);
}

Range assign_class_in_StaticDataMap_for_AnalogOutputStatusSpecOver2(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, PointClass_uint8_t clazz, Range* range)
{
//  for (auto iter = pStaticDataMap_for_AnalogOutputStatusSpec->map.lower_bound(range->start); iter != pStaticDataMap_for_AnalogOutputStatusSpec->map.end() &&
////             range.Contains(iter->first);
//       Contains_in_Range(range, iter->first); iter++)
//  {
//    iter->second.config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.clazz = clazz;
//  }

  uint16_t next_index = KeyMap2IndexMass_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, range->start);
  while((next_index < MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec)) &&
        Contains_in_Range(range, KeyMap2IndexMass_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, next_index)))
  {
    pStaticDataMap_for_AnalogOutputStatusSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_AnalogOutputStatusInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

//Range get_full_range_in_StaticDataMap_for_AnalogSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec);
//Range Intersection_in_Range(Range *pRange, Range* other);
////    return range.Intersection(this->get_full_range());
  Range temp = get_full_range_in_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec);
  return Intersection_in_Range(range, &temp);
}

int iterator_operatorPlusPlus_for_AnalogOutputStatusSpec(StaticDataMap_for_AnalogOutputStatusSpec *pStaticDataMap_for_AnalogOutputStatusSpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_BinarySpec = false;
  pStaticDataMap_for_AnalogOutputStatusSpec->map[i].selection_in_StaticDataCell.selected = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_AnalogOutputStatusSpec->selected = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec);
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
    pStaticDataMap_for_AnalogOutputStatusSpec->selected.start = 
               IndexMass2KeyMap_for_AnalogOutputStatusSpec(pStaticDataMap_for_AnalogOutputStatusSpec->db_config, i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_BinarySpec)
    if ( pStaticDataMap_for_AnalogOutputStatusSpec->map[i].selection_in_StaticDataCell.selected)
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
