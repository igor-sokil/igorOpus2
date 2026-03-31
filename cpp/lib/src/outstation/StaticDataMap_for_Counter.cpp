#include "log_info.h"

#include "header_dnp3.h"
#include "StaticDataMap_for_Counter.h"

uint16_t MapSize_for_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec)
{
  return pStaticDataMap_for_CounterSpec->db_config->counter_count;
}

void StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap)
{
  Range_in_RangeOver1(&(pStaticDataMap->selected));
}
////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap, std::map<uint16_t, CounterConfig>& config)
void StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2_1"<<'\n';
#endif

  StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver1(pStaticDataMap);
  pStaticDataMap->db_config = config;

//  for (const auto& item : config)
  for (int i=0; i<MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_Counter_in_StaticDataCell_for_CounterOver1(StaticDataCell_for_Counter *pStaticDataCell_for_Counter,
//    CounterConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    CounterConfig temp = item.second;
    CounterConfig temp = pStaticDataMap->db_config->counter_config[i];
    StaticDataCell_for_Counter sStaticDataCell_for_Counter;
    StaticDataCell_for_Counter_in_StaticDataCell_for_CounterOver2(&sStaticDataCell_for_Counter, &temp);
//    pStaticDataMap->map[item.first] = sStaticDataCell_for_Counter;
    pStaticDataMap->map[i] = sStaticDataCell_for_Counter;
  }
#ifdef  LOG_INFO
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec)
{
  return pStaticDataMap_for_CounterSpec->selected;
}
/*
typename StaticDataMap_for_CounterSpec::iterator StaticDataMap_for_CounterSpec::begin()
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
void clear_selection_in_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec)
{
  // the act of iterating clears the selection
//  for (auto iter = pStaticDataMap_for_CounterSpec->begin(); iter != pStaticDataMap_for_CounterSpec->end(); ++iter)
//  {
//  }
  Range_in_RangeOver1(&(pStaticDataMap_for_CounterSpec->selected));
}
/*
////template<class Spec> typename StaticDataMap<Spec>::iterator StaticDataMap<Spec>::end()
typename StaticDataMap_for_CounterSpec::iterator StaticDataMap_for_CounterSpec::end()
{
  return iterator(this->map.end(), this->map.end(), this->selected);
}
*/
////template<class Spec>
////typename Spec::static_variation_t check_for_promotion(const typename Spec::meas_t& value,
////                                                      typename Spec::static_variation_t variation)
StaticCounterVariation_uint8_t check_for_promotion_for_CounterSpec_static(Counter* value, StaticCounterVariation_uint8_t variation)
{
  UNUSED(value);
  return variation;
}

StaticCounterVariation_uint8_t get_variation_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_AnalogSpec, int index);
StaticCounterVariation_uint8_t get_variation_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_AnalogSpec, int index);

StaticCounterVariation_uint8_t get_variation_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index)
{
  return pStaticDataMap_for_CounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.svariation;
}
StaticAnalogVariation_uint8_t get_variation_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index)
{
  UNUSED(pStaticDataMap_for_CounterSpec);
  UNUSED(index);
  StaticCounterVariation_uint8_t *var = (StaticCounterVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec)
{
//  return select_all_in_StaticDataMap_for_CounterSpecOver3(pStaticDataMap_for_CounterSpec, [](auto var) {
//    return var;
//  }); // use the default
  return select_all_in_StaticDataMap_for_CounterSpecOver3(pStaticDataMap_for_CounterSpec, get_variation_in_StaticDataMap_for_CounterSpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, StaticCounterVariation_uint8_t variation)
{
//  return select_all_in_StaticDataMap_for_CounterSpecOver3(pStaticDataMap_for_CounterSpec, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_CounterSpecOver3(pStaticDataMap_for_CounterSpec, get_variation_in_StaticDataMap_for_CounterSpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_CounterSpecOver3(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec,
    StaticCounterVariation_uint8_t (*get_variation)(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index)
                                                         ) //, F get_variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{select_all_in_StaticDataMap_for_CounterSpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_CounterSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_CounterSpec->selected.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_CounterSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_CounterSpec->selected.stop<<'\n';
#endif

//  if (pStaticDataMap_for_CounterSpec->map.empty())
  if (MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_CounterSpecOver3_1_"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_CounterSpec->selected = From_in_Range_static(pStaticDataMap_for_CounterSpec->map.begin()->first,
//        pStaticDataMap_for_CounterSpec->map.rbegin()->first);
    pStaticDataMap_for_CounterSpec->selected =
      From_in_Range_static(IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, 0),
                           IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config,
          MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec)-1));
    //0,//pStaticDataMap_for_CounterSpec->map.begin()->first,
//        pStaticDataMap_for_CounterSpec->db_config->Counter_input_count-1);
//        pStaticDataMap_for_CounterSpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_CounterSpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec); i++)
    {
// StaticCounterVariation_uint8_t check_for_promotion_for_CounterSpec(Counter* value, StaticCounterVariation_uint8_t variation);
//void SelectedValue_for_CounterSpec_in_SelectedValue_for_CounterSpecOver2(SelectedValue_for_CounterSpec *pSelectedValue_for_CounterSpec,
//                                          boolean selected, Counter* value, StaticCounterVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_CounterSpec sSelectedValue_for_CounterSpec;
      SelectedValue_for_CounterSpec_in_SelectedValue_for_CounterSpecOver2(&sSelectedValue_for_CounterSpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_CounterSpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_CounterSpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_CounterSpec_static(&(pStaticDataMap_for_CounterSpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_CounterSpec, i)));
//                             pStaticDataMap_for_CounterSpec->map[i].config_in_StaticDataCell.
//              dDeadbandConfig_for_CounterInfo.eEventConfig.svariation));
//eEventConfig.svariation));

#ifdef  LOG_INFO
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*select_all_in_StaticDataMap_for_CounterSpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_CounterSpec.variation= "<<(uint16_t)sSelectedValue_for_CounterSpec.variation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_CounterSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_CounterSpec->selected.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_CounterSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_CounterSpec->selected.stop<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*i= "<<i<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_Counter = sSelectedValue_for_CounterSpec;
      pStaticDataMap_for_CounterSpec->map[i].selection_in_StaticDataCell = sSelectedValue_for_CounterSpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_CounterSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_CounterSpec->selected.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_CounterSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_CounterSpec->selected.stop<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_CounterSpecOver3_2_"<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_CounterSpec->map.size();
    return MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec);
  }
}

StaticCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index);
StaticCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index);

StaticCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index)
{
  return pStaticDataMap_for_CounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.svariation;
}
StaticCounterVariation_uint8_t get_variation_in_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index)
{
  UNUSED(pStaticDataMap_for_CounterSpec);
  UNUSED(index);
  StaticCounterVariation_uint8_t *var = (StaticCounterVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
  return select_in_StaticDataMap_for_CounterSpecOver5(pStaticDataMap_for_CounterSpec, range, get_variation_in_in_StaticDataMap_for_CounterSpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, uint16_t index, StaticCounterVariation_uint8_t variation)
{
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_CounterSpecOver4(pStaticDataMap_for_CounterSpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_CounterSpecOver3(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, uint16_t index)
{
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_CounterSpecOver1(pStaticDataMap_for_CounterSpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_CounterSpecOver4(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, Range range, StaticCounterVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
//  return select_in_StaticDataMap_for_CounterSpecOver5(pStaticDataMap_for_CounterSpec, range, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_CounterSpecOver5(pStaticDataMap_for_CounterSpec, range, get_variation_in_in_StaticDataMap_for_CounterSpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_CounterSpecOver5(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, Range range,
    StaticCounterVariation_uint8_t (*get_variation)(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int index))
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, range.start);

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec))
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
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, iter);
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
    Counter cCounter = pStaticDataMap_for_CounterSpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_CounterSpec sSelectedValue_for_CounterSpec = {
      true, cCounter,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_CounterSpec_static(&cCounter,
          get_variation(pStaticDataMap_for_CounterSpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_CounterSpec->map[iter].selection_in_StaticDataCell = sSelectedValue_for_CounterSpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_CounterSpec->selected = Union_in_Range(&(pStaticDataMap_for_CounterSpec->selected), &rRange);

  return count;
}

boolean update_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec,
    Counter* value,
    uint16_t index,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
//boolean update_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec,
//    map_iter_t_StaticDataMap_for_CounterSpec & iter,
//    Counter* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////    return update(this->map.find(index), value, mode, receiver);
//  map_iter_t_StaticDataMap_for_CounterSpec  iter = pStaticDataMap_for_CounterSpec->map.find(index);
  return update_in_StaticDataMap_for_CounterSpecOver2(pStaticDataMap_for_CounterSpec,
         index, value, mode, receiver);
}

boolean update_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec,
//    map_iter_t_StaticDataMap_for_CounterSpec & iter,
    uint16_t keyMap,
    Counter* new_value,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{update_in_StaticDataMap_for_CounterSpecOver2_1"<<'\n';
  inspect_Counter(new_value);
#endif

//  if (iter == pStaticDataMap_for_CounterSpec->map.end())
  uint16_t index = KeyMap2IndexMass_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, keyMap);
  if(index >= MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec))
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}update_in_StaticDataMap_for_CounterSpecOver2_1_"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }

  if (mode != EventMode_EventOnly)
  {
//    iter->second.value_in_StaticDataCell = *new_value;
    pStaticDataMap_for_CounterSpec->map[index].value_in_StaticDataCell = *new_value;
  }

//  Counter old_value = iter->second.event_in_StaticDataCell.eEventCellBase_for_Counter.lastEvent;
  Counter old_value = pStaticDataMap_for_CounterSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_Counter.lastEvent;

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"update_in_StaticDataMap_for_CounterSpecOver2_2"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*inspect_Counter(&old_value)"<<'\n';
  inspect_Counter(&old_value);
#endif

  if (mode == EventMode_Force || mode == EventMode_EventOnly ||
//boolean IsEvent_in_CounterSpec_static(Counter *old_value, Counter *new_value, CounterConfig *config);
////        Spec::IsEvent(iter->second.event.lastEvent, new_value, iter->second.config))
//      IsEvent_in_CounterSpec_static(&old_value, new_value, &(iter->second.config_in_StaticDataCell)))
      IsEvent_in_CounterSpec_static(&old_value, new_value, &(pStaticDataMap_for_CounterSpec->map[index].config_in_StaticDataCell)))
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"update_in_StaticDataMap_for_CounterSpecOver2_3"<<'\n';
#endif

//    iter->second.event_in_StaticDataCell.eEventCellBase_for_Counter.lastEvent = *new_value;
    pStaticDataMap_for_CounterSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_Counter.lastEvent = *new_value;
    if (mode != EventMode_Suppress)
    {
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"update_in_StaticDataMap_for_CounterSpecOver2_4"<<'\n';
#endif

      EventClass_uint8_t ec;
//boolean convert_to_event_class_in_StaticDataMap_static(PointClass_uint8_t pc, EventClass_uint8_t* ec);
////            if (convert_to_event_class(iter->second.config.clazz, ec))
//      if (convert_to_event_class_in_StaticDataMap_static(iter->second.config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.clazz, &ec))
      if (convert_to_event_class_in_StaticDataMap_static(pStaticDataMap_for_CounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.clazz, &ec))
      {
//void Event_for_CounterSpec_in_Event_for_CounterSpecOver2(Event_for_CounterSpec *pEvent_for_CounterSpec,
//    Counter* value, uint16_t index,
//    EventClass_uint8_t clazz,
//    event_variation_t_in_CounterInfo variation);
//void Update_CounterSpec_in_IEventReceiver(IEventReceiver *, Event_for_CounterSpec* evt);
////                receiver.Update(Event<Spec>(new_value, iter->first, ec, iter->second.config.evariation));
        Event_for_CounterSpec eEvent_for_CounterSpec;
        Event_for_CounterSpec_in_Event_for_CounterSpecOver2(&eEvent_for_CounterSpec,
            new_value,
//            iter->first,
            IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, index),
            ec,
//            iter->second.config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.evariation);
            pStaticDataMap_for_CounterSpec->map[index].config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.evariation);
        Update_CounterSpec_in_IEventReceiver(receiver, &eEvent_for_CounterSpec);

      }
    }
  }

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}update_in_StaticDataMap_for_CounterSpecOver2_2_"<<'\n';
  decrement_stack_info();
#endif
  return true;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_CounterSpec->selected));
}

boolean add_in_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, Counter *value, uint16_t index, CounterConfig *config)
{
//  if (pStaticDataMap_for_CounterSpec->map.find(index) != pStaticDataMap_for_CounterSpec->map.end())
  index = KeyMap2IndexMass_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, index);
  if (index >= MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec))
  {
    return false;
  }

//void  StaticDataCell_for_Counter_in_StaticDataCell_for_CounterOver3(StaticDataCell_for_Counter *pStaticDataCell_for_Counter,
//    Counter* value,
//    CounterConfig* config);
  StaticDataCell_for_Counter sStaticDataCell;
  StaticDataCell_for_Counter_in_StaticDataCell_for_CounterOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_CounterSpec->map[index] = sStaticDataCell;////StaticDataCell_for_CounterSpec{value, config};

  return true;
}

boolean modify_in_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec,
    uint16_t start, uint16_t stop, uint8_t flags,
    IEventReceiver* receiver)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{modify_in_StaticDataMap_for_CounterSpec1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint16_t start= "<<start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint16_t stop= "<<stop<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*uint8_t flags= "<<(uint16_t)flags<<'\n';
#endif

  if (stop < start)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}modify_in_StaticDataMap_for_CounterSpec1_"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }

  if (start >= MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec))
  {
    return false;
  }

  uint16_t iter = KeyMap2IndexMass_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, start);

//  for (auto iter = pStaticDataMap_for_CounterSpec->map.lower_bound(start); iter != pStaticDataMap_for_CounterSpec->map.end(); ++iter)
  for (; iter != MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec); ++iter)
  {
//    if (iter->first > stop)
    if(IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, iter) > stop)
    {
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}modify_in_StaticDataMap_for_CounterSpec2_"<<'\n';
      decrement_stack_info();
#endif
      return false;
    }

//    Counter new_value = iter->second.value_in_StaticDataCell;
    Counter new_value = pStaticDataMap_for_CounterSpec->map[iter].value_in_StaticDataCell;
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"*modify_in_StaticDataMap_for_CounterSpec2"<<'\n';
    inspect_Counter(&new_value);
#endif

////        new_value.flags = Flags(flags);
    Flags fFlags;
    Flags_In_FlagsOver2(&fFlags, flags);
    new_value.tTypedMeasurement_for_Uint32.mMeasurement.flags = fFlags;
//boolean update_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec,
//    map_iter_t_StaticDataMap_for_CounterSpec & iter,
//    Counter* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////        this->update(iter, new_value, EventMode::Detect, receiver);
    update_in_StaticDataMap_for_CounterSpecOver2(pStaticDataMap_for_CounterSpec,
        IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, iter),
        &new_value,
        EventMode_Detect,
        receiver);
  }

#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}modify_in_StaticDataMap_for_CounterSpec3_"<<'\n';
  decrement_stack_info();
#endif
  return true;
}

////template<class Spec> Range StaticDataMap<Spec>::get_full_range() const
Range get_full_range_in_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec)
{
//Range From_in_Range_static(uint16_t start, uint16_t stop);
//Range Invalid_in_Range_static(void);
////    return this->map.empty() ? Range::Invalid() : Range::From(this->map.begin()->first, this->map.rbegin()->first);
//  return pStaticDataMap_for_CounterSpec->map.empty() ? Invalid_in_Range_static() :
//         From_in_Range_static(pStaticDataMap_for_CounterSpec->map.begin()->first, pStaticDataMap_for_CounterSpec->map.rbegin()->first);
  return MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec)==0 ? Invalid_in_Range_static() :
         From_in_Range_static(IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, 0),
                              IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config,
                MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec)-1));
}

////template<class Spec> Range StaticDataMap<Spec>::assign_class(PointClass clazz)
Range assign_class_in_StaticDataMap_for_CounterSpecOver1(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, PointClass_uint8_t clazz)
{
//  for (auto& elem : pStaticDataMap_for_CounterSpec->map)
//  {
//    elem.second.config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.clazz = clazz;
//  }

  uint16_t  next_index = 0;
  while(next_index < MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec))
  {
    pStaticDataMap_for_CounterSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

////    return this->get_full_range();
  return get_full_range_in_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec);
}

Range assign_class_in_StaticDataMap_for_CounterSpecOver2(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, PointClass_uint8_t clazz, Range* range)
{
//  for (auto iter = pStaticDataMap_for_CounterSpec->map.lower_bound(range->start); iter != pStaticDataMap_for_CounterSpec->map.end() &&
////             range.Contains(iter->first);
//       Contains_in_Range(range, iter->first); iter++)
//  {
//    iter->second.config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.clazz = clazz;
//  }

  uint16_t next_index = KeyMap2IndexMass_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, range->start);
  while((next_index < MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec)) &&
        Contains_in_Range(range, KeyMap2IndexMass_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, next_index)))
  {
    pStaticDataMap_for_CounterSpec->map[next_index].config_in_StaticDataCell.dDeadbandConfig_for_CounterInfo.eEventConfig.clazz = clazz;
    next_index++;
  }

//Range get_full_range_in_StaticDataMap_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec);
//Range Intersection_in_Range(Range *pRange, Range* other);
////    return range.Intersection(this->get_full_range());
  Range temp = get_full_range_in_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec);
  return Intersection_in_Range(range, &temp);
}

int iterator_operatorPlusPlus_for_CounterSpec(StaticDataMap_for_CounterSpec *pStaticDataMap_for_CounterSpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_CounterSpec = false;
  pStaticDataMap_for_CounterSpec->map[i].selection_in_StaticDataCell.selected = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_CounterSpec->selected = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_CounterSpec(pStaticDataMap_for_CounterSpec);
    }

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"*operator++1"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
#endif
    // shorten the range
////        this->range.start = iter->first;
//    pStaticDataMap_for_CounterSpec->selected_in_StaticDataMap_for_CounterSpec.start = i;
    pStaticDataMap_for_CounterSpec->selected.start = 
               IndexMass2KeyMap_for_CounterSpec(pStaticDataMap_for_CounterSpec->db_config, i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_CounterSpec)
    if ( pStaticDataMap_for_CounterSpec->map[i].selection_in_StaticDataCell.selected)
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
