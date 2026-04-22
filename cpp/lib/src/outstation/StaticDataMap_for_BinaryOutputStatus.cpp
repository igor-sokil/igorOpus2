#include "log_info.h"

#include "header_dnp3.h"
#include "StaticDataMap_for_BinaryOutputStatus.h"

uint16_t MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec)
{
  return pStaticDataMap_for_BinaryOutputStatusSpec->db_config->binary_output_status_count;
}

void setMapSize_DatabaseConfig_for_BinaryOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t db_size)
{
  pDatabaseConfig->binary_output_status_count = db_size;
}

void StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap)
{
  Range_in_RangeOver1(&(pStaticDataMap->selected));
}
////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap, std::map<uint16_t, BOStatusConfig>& config)
void StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver2_1"<<'\n';
#endif

  StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(pStaticDataMap);
  pStaticDataMap->db_config = config;

//  for (const auto& item : config)
  for (int i=0; i<MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_BinaryOutputStatus_in_StaticDataCell_for_BinaryOutputStatusOver1(StaticDataCell_for_BinaryOutputStatus *pStaticDataCell_for_BinaryOutputStatus,
//    BinaryOutputStatusConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    BOStatusConfig temp = item.second;
    BOStatusConfig temp = pStaticDataMap->db_config->binary_output_status_config[i];
    StaticDataCell_for_BinaryOutputStatus sStaticDataCell_for_BinaryOutputStatus;
    StaticDataCell_for_BinaryOutputStatus_in_StaticDataCell_for_BinaryOutputStatusOver2(&sStaticDataCell_for_BinaryOutputStatus, &temp);
////    pStaticDataMap->map[item.first] = sStaticDataCell_for_BinaryOutputStatus;
    pStaticDataMap->map[i] = sStaticDataCell_for_BinaryOutputStatus;
  }
#ifdef  LOG_INFO
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec)
{
  return pStaticDataMap_for_BinaryOutputStatusSpec->selected;
}
/*
typename StaticDataMap_for_BinaryOutputStatusSpec::iterator StaticDataMap_for_BinaryOutputStatusSpec::begin()
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
void clear_selection_in_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec)
{
  // the act of iterating clears the selection
////  for (auto iter = pStaticDataMap_for_BinaryOutputStatusSpec->begin(); iter != pStaticDataMap_for_BinaryOutputStatusSpec->end(); ++iter)
///  {
///  }
  Range_in_RangeOver1(&(pStaticDataMap_for_BinaryOutputStatusSpec->selected));
}
/*
////template<class Spec> typename StaticDataMap<Spec>::iterator StaticDataMap<Spec>::end()
typename StaticDataMap_for_BinaryOutputStatusSpec::iterator StaticDataMap_for_BinaryOutputStatusSpec::end()
{
  return iterator(this->map.end(), this->map.end(), this->selected);
}
*/
////template<class Spec>
////typename Spec::static_variation_t check_for_promotion(const typename Spec::meas_t& value,
////                                                      typename Spec::static_variation_t variation)
StaticBinaryOutputStatusVariation_uint8_t check_for_promotion_for_BinaryOutputStatusSpec_static(BinaryOutputStatus* value, StaticBinaryOutputStatusVariation_uint8_t variation)
{
  UNUSED(value);
  return variation;
}

StaticBinaryOutputStatusVariation_uint8_t get_variation_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index);
StaticBinaryOutputStatusVariation_uint8_t get_variation_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index);

StaticBinaryVariation_uint8_t get_variation_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index)
{
  return pStaticDataMap_for_BinaryOutputStatusSpec->map[index].config_in_StaticDataCell.eEventConfig.svariation;
}
StaticBinaryVariation_uint8_t get_variation_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index)
{
  UNUSED(pStaticDataMap_for_BinaryOutputStatusSpec);
  UNUSED(index);
  StaticBinaryOutputStatusVariation_uint8_t *var = (StaticBinaryOutputStatusVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec)
{
//  return select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3(pStaticDataMap_for_BinaryOutputStatusSpec, [](auto var) {
//    return var;
//  }); // use the default
  return select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3(pStaticDataMap_for_BinaryOutputStatusSpec, get_variation_in_StaticDataMap_for_BinaryOutputStatusSpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, StaticBinaryOutputStatusVariation_uint8_t variation)
{
////  return select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3(pStaticDataMap_for_BinaryOutputStatusSpec, [variation](auto var) {
////    return variation;
////  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3(pStaticDataMap_for_BinaryOutputStatusSpec, get_variation_in_StaticDataMap_for_BinaryOutputStatusSpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec,
    StaticBinaryOutputStatusVariation_uint8_t (*get_variation)(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index)
                                                                    ) //, F get_variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_BinaryOutputStatusSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_BinaryOutputStatusSpec->selected.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_BinaryOutputStatusSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_BinaryOutputStatusSpec->selected.stop<<'\n';
#endif

//  if (pStaticDataMap_for_BinaryOutputStatusSpec->map.empty())
  if (MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3_1_"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_BinaryOutputStatusSpec->selected = From_in_Range_static(pStaticDataMap_for_BinaryOutputStatusSpec->map.begin()->first,
//        pStaticDataMap_for_BinaryOutputStatusSpec->map.rbegin()->first);
    pStaticDataMap_for_BinaryOutputStatusSpec->selected =
      From_in_Range_static(IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, 0),
                           IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config,
             MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec)-1));
    //0,//pStaticDataMap_for_BinaryOutputStatusSpec->map.begin()->first,
//        pStaticDataMap_for_BinaryOutputStatusSpec->db_config->BinaryOutputStatus_input_count-1);
//        pStaticDataMap_for_BinaryOutputStatusSpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_BinaryOutputStatusSpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec); i++)
    {
// StaticBinaryVariation_uint8_t check_for_promotion_for_BinaryOutputStatusSpec(BinaryOutputStatus* value, StaticBinaryOutputStatusVariation_uint8_t variation);
//void SelectedValue_for_BinaryOutputStatusSpec_in_SelectedValue_for_BinaryOutputStatusSpecOver2(SelectedValue_for_BinaryOutputStatusSpec *pSelectedValue_for_BinaryOutputStatusSpec,
//                                          boolean selected, BinaryOutputStatus* value, StaticBinaryOutputStatusVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_BinaryOutputStatusSpec sSelectedValue_for_BinaryOutputStatusSpec;
      SelectedValue_for_BinaryOutputStatusSpec_in_SelectedValue_for_BinaryOutputStatusSpecOver2(&sSelectedValue_for_BinaryOutputStatusSpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_BinaryOutputStatusSpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_BinaryOutputStatusSpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_BinaryOutputStatusSpec_static(&(pStaticDataMap_for_BinaryOutputStatusSpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_BinaryOutputStatusSpec, i)));
//                             pStaticDataMap_for_BinaryOutputStatusSpec->map[i].config_in_StaticDataCell.
//              dDeadbandConfig_for_BinaryOutputStatusInfo.eEventConfig.svariation));
//eEventConfig.svariation));

#ifdef  LOG_INFO
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_BinaryOutputStatusSpec.variation= "<<(uint16_t)sSelectedValue_for_BinaryOutputStatusSpec.variation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_BinaryOutputStatusSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_BinaryOutputStatusSpec->selected.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_BinaryOutputStatusSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_BinaryOutputStatusSpec->selected.stop<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*i= "<<i<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_Binary = sSelectedValue_for_BinaryOutputStatusSpec;
      pStaticDataMap_for_BinaryOutputStatusSpec->map[i].selection_in_StaticDataCell = sSelectedValue_for_BinaryOutputStatusSpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_BinaryOutputStatusSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_BinaryOutputStatusSpec->selected.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_BinaryOutputStatusSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_BinaryOutputStatusSpec->selected.stop<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}select_all_in_StaticDataMap_for_BinaryOutputStatusSpecOver3_2_"<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_BinaryOutputStatusSpec->map.size();
    return MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec);
  }
}

StaticBinaryOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index);
StaticBinaryOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index);

StaticBinaryOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index)
{
  return pStaticDataMap_for_BinaryOutputStatusSpec->map[index].config_in_StaticDataCell.eEventConfig.svariation;
}
StaticBinaryOutputStatusVariation_uint8_t get_variation_in_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index)
{
  UNUSED(pStaticDataMap_for_BinaryOutputStatusSpec);
  UNUSED(index);
  StaticBinaryOutputStatusVariation_uint8_t *var = (StaticBinaryOutputStatusVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
////  return select_in_StaticDataMap_for_BinaryOutputStatusSpecOver5(pStaticDataMap_for_BinaryOutputStatusSpec, range, [](auto var) {
////    return var;
////  }); // use the default
  return select_in_StaticDataMap_for_BinaryOutputStatusSpecOver5(pStaticDataMap_for_BinaryOutputStatusSpec, range, get_variation_in_in_StaticDataMap_for_BinaryOutputStatusSpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, uint16_t index, StaticBinaryOutputStatusVariation_uint8_t variation)
{
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_BinaryOutputStatusSpecOver4(pStaticDataMap_for_BinaryOutputStatusSpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_BinaryOutputStatusSpecOver3(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, uint16_t index)
{
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(pStaticDataMap_for_BinaryOutputStatusSpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_BinaryOutputStatusSpecOver4(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, Range range, StaticBinaryOutputStatusVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
/////  return select_in_StaticDataMap_for_BinaryOutputStatusSpecOver5(pStaticDataMap_for_BinaryOutputStatusSpec, range, [variation](auto var) {
////    return variation;
////  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_BinaryOutputStatusSpecOver5(pStaticDataMap_for_BinaryOutputStatusSpec, range, get_variation_in_in_StaticDataMap_for_BinaryOutputStatusSpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_BinaryOutputStatusSpecOver5(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, Range range,
    StaticBinaryOutputStatusVariation_uint8_t (*get_variation)(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int index))
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, range.start);

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec))
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
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, iter);
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
    BinaryOutputStatus bBinaryOutputStatus = pStaticDataMap_for_BinaryOutputStatusSpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_BinaryOutputStatusSpec sSelectedValue_for_BinaryOutputStatusSpec = {
      true, bBinaryOutputStatus,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_BinaryOutputStatusSpec_static(&bBinaryOutputStatus,
          get_variation(pStaticDataMap_for_BinaryOutputStatusSpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_BinaryOutputStatusSpec->map[iter].selection_in_StaticDataCell = sSelectedValue_for_BinaryOutputStatusSpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_BinaryOutputStatusSpec->selected = Union_in_Range(&(pStaticDataMap_for_BinaryOutputStatusSpec->selected), &rRange);

  return count;
}

boolean update_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec,
    BinaryOutputStatus* value,
    uint16_t index,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
//boolean update_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec,
//    map_iter_t_StaticDataMap_for_BinaryOutputStatusSpec & iter,
//    BinaryOutputStatus* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////    return update(this->map.find(index), value, mode, receiver);
////  map_iter_t_StaticDataMap_for_BinaryOutputStatusSpec  iter = pStaticDataMap_for_BinaryOutputStatusSpec->map.find(index);
  return update_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(pStaticDataMap_for_BinaryOutputStatusSpec,
////         iter, value, mode, receiver);
         index, value, mode, receiver);
}

boolean update_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec,
////    map_iter_t_StaticDataMap_for_BinaryOutputStatusSpec & iter,
    uint16_t keyMap,
    BinaryOutputStatus* new_value,
    EventMode_uint8_t mode,
    IEventReceiver* receiver)
{
////  if (iter == pStaticDataMap_for_BinaryOutputStatusSpec->map.end())
  uint16_t index = KeyMap2IndexMass_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, keyMap);
  if(index >= MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec))
  {
    return false;
  }

  if (mode != EventMode_EventOnly)
  {
////    iter->second.value_in_StaticDataCell = *new_value;
    pStaticDataMap_for_BinaryOutputStatusSpec->map[index].value_in_StaticDataCell = *new_value;
  }

////  BinaryOutputStatus old_value = iter->second.event_in_StaticDataCell.eEventCellBase_for_BinaryOutputStatus.lastEvent;
  BinaryOutputStatus old_value = pStaticDataMap_for_BinaryOutputStatusSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_BinaryOutputStatus.lastEvent;
  if (mode == EventMode_Force || mode == EventMode_EventOnly ||
//boolean IsEvent_in_BinaryOutputStatusSpec_static(BinaryOutputStatus *old_value, BinaryOutputStatus *new_value, BinaryOutputStatusConfig *config);
////        Spec::IsEvent(iter->second.event.lastEvent, new_value, iter->second.config))
//      IsEvent_in_BinaryOutputStatusSpec_static(&old_value, new_value, &(iter->second.config_in_StaticDataCell)))
      IsEvent_in_BinaryOutputStatusSpec_static(&old_value, new_value, &(pStaticDataMap_for_BinaryOutputStatusSpec->map[index].config_in_StaticDataCell)))
  {
//    iter->second.event_in_StaticDataCell.eEventCellBase_for_BinaryOutputStatus.lastEvent = *new_value;
    pStaticDataMap_for_BinaryOutputStatusSpec->map[index].event_in_StaticDataCell.eEventCellBase_for_BinaryOutputStatus.lastEvent = *new_value;
    if (mode != EventMode_Suppress)
    {
      EventClass_uint8_t ec;
//boolean convert_to_event_class_in_StaticDataMap_static(PointClass_uint8_t pc, EventClass_uint8_t* ec);
////            if (convert_to_event_class(iter->second.config.clazz, ec))
//      if (convert_to_event_class_in_StaticDataMap_static(iter->second.config_in_StaticDataCell.eEventConfig.clazz, &ec))
      if (convert_to_event_class_in_StaticDataMap_static(pStaticDataMap_for_BinaryOutputStatusSpec->map[index].config_in_StaticDataCell.eEventConfig.clazz, &ec))
      {
//void Event_for_BinaryOutputStatusSpec_in_Event_for_BinaryOutputStatusSpecOver2(Event_for_BinaryOutputStatusSpec *pEvent_for_BinaryOutputStatusSpec,
//    BinaryOutputStatus* value, uint16_t index,
//    EventClass_uint8_t clazz,
//    event_variation_t_in_BinaryOutputStatusInfo variation);
//void Update_BinaryOutputStatusSpec_in_IEventReceiver(IEventReceiver *, Event_for_BinaryOutputStatusSpec* evt);
////                receiver.Update(Event<Spec>(new_value, iter->first, ec, iter->second.config.evariation));
        Event_for_BinaryOutputStatusSpec eEvent_for_BinaryOutputStatusSpec;
        Event_for_BinaryOutputStatusSpec_in_Event_for_BinaryOutputStatusSpecOver2(&eEvent_for_BinaryOutputStatusSpec,
            new_value,
////            iter->first,
            IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, index),
            ec,
////            iter->second.config_in_StaticDataCell.eEventConfig.evariation);
            pStaticDataMap_for_BinaryOutputStatusSpec->map[index].config_in_StaticDataCell.eEventConfig.evariation);
        Update_BinaryOutputStatusSpec_in_IEventReceiver(receiver, &eEvent_for_BinaryOutputStatusSpec);

      }
    }
  }

  return true;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_BinaryOutputStatusSpec->selected));
}

boolean add_in_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, BinaryOutputStatus *value, uint16_t index, BOStatusConfig *config)
{
//  if (pStaticDataMap_for_BinaryOutputStatusSpec->map.find(index) != pStaticDataMap_for_BinaryOutputStatusSpec->map.end())
  index = KeyMap2IndexMass_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, index);
  if (index >= MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec))
  {
    return false;
  }

//void  StaticDataCell_for_BinaryOutputStatus_in_StaticDataCell_for_BinaryOutputStatusOver3(StaticDataCell_for_BinaryOutputStatus *pStaticDataCell_for_BinaryOutputStatus,
//    BinaryOutputStatus* value,
//    BinaryOutputStatusConfig* config);
  StaticDataCell_for_BinaryOutputStatus sStaticDataCell;
  StaticDataCell_for_BinaryOutputStatus_in_StaticDataCell_for_BinaryOutputStatusOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_BinaryOutputStatusSpec->map[index] = sStaticDataCell;////StaticDataCell_for_BinaryOutputStatusSpec{value, config};

  return true;
}

boolean modify_in_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec,
    uint16_t start, uint16_t stop, uint8_t flags,
    IEventReceiver* receiver)
{
  if (stop < start)
  {
    return false;
  }

  uint16_t iter = KeyMap2IndexMass_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, stop);
  if (iter >= MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec))
  {
    return false;
  }
  iter = KeyMap2IndexMass_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, start);
  if (iter >= MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec))
  {
    return false;
  }

//  for (auto iter = pStaticDataMap_for_BinaryOutputStatusSpec->map.lower_bound(start); iter != pStaticDataMap_for_BinaryOutputStatusSpec->map.end(); ++iter)
  for (; iter != MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec); ++iter)
  {
//    if (iter->first > stop)
    if(IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, iter) > stop)
    {
      return true;//false;
    }

//    BinaryOutputStatus new_value = iter->second.value_in_StaticDataCell;
    BinaryOutputStatus new_value = pStaticDataMap_for_BinaryOutputStatusSpec->map[iter].value_in_StaticDataCell;
////        new_value.flags = Flags(flags);
    Flags fFlags;
    Flags_In_FlagsOver2(&fFlags, flags);
    new_value.tTypedMeasurement_for_Boolean.mMeasurement.flags = fFlags;
//boolean update_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec,
//    map_iter_t_StaticDataMap_for_BinaryOutputStatusSpec & iter,
//    BinaryOutputStatus* new_value,
//    EventMode_uint8_t mode,
//    IEventReceiver* receiver);
////        this->update(iter, new_value, EventMode::Detect, receiver);
    update_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(pStaticDataMap_for_BinaryOutputStatusSpec,
        IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, iter),
        &new_value,
        EventMode_Detect,
        receiver);
  }

  return true;
}

////template<class Spec> Range StaticDataMap<Spec>::get_full_range() const
Range get_full_range_in_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec)
{
//Range From_in_Range_static(uint16_t start, uint16_t stop);
//Range Invalid_in_Range_static(void);
////    return this->map.empty() ? Range::Invalid() : Range::From(this->map.begin()->first, this->map.rbegin()->first);
//  return pStaticDataMap_for_BinaryOutputStatusSpec->map.empty() ? Invalid_in_Range_static() :
//         From_in_Range_static(pStaticDataMap_for_BinaryOutputStatusSpec->map.begin()->first, pStaticDataMap_for_BinaryOutputStatusSpec->map.rbegin()->first);
  return MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec)==0 ? Invalid_in_Range_static() :
         From_in_Range_static(IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, 0),
                              IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config,
               MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec)-1));
}

////template<class Spec> Range StaticDataMap<Spec>::assign_class(PointClass clazz)
Range assign_class_in_StaticDataMap_for_BinaryOutputStatusSpecOver1(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, PointClass_uint8_t clazz)
{
//  for (auto& elem : pStaticDataMap_for_BinaryOutputStatusSpec->map)
//  {
//    elem.second.config_in_StaticDataCell.eEventConfig.clazz = clazz;
//  }

  uint16_t  next_index = 0;
  while(next_index < MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec))
  {
    pStaticDataMap_for_BinaryOutputStatusSpec->map[next_index].config_in_StaticDataCell.eEventConfig.clazz = clazz;
    next_index++;
  }

////    return this->get_full_range();
  return get_full_range_in_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec);
}

Range assign_class_in_StaticDataMap_for_BinaryOutputStatusSpecOver2(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, PointClass_uint8_t clazz, Range* range)
{
//  for (auto iter = pStaticDataMap_for_BinaryOutputStatusSpec->map.lower_bound(range->start); iter != pStaticDataMap_for_BinaryOutputStatusSpec->map.end() &&
////             range.Contains(iter->first);
//       Contains_in_Range(range, iter->first); iter++)
//  {
//    iter->second.config_in_StaticDataCell.eEventConfig.clazz = clazz;
//  }

  uint16_t next_index = KeyMap2IndexMass_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, range->start);
  while((next_index < MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec)) &&
        Contains_in_Range(range, KeyMap2IndexMass_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, next_index)))
  {
    pStaticDataMap_for_BinaryOutputStatusSpec->map[next_index].config_in_StaticDataCell.eEventConfig.clazz = clazz;
    next_index++;
  }

//Range get_full_range_in_StaticDataMap_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec);
//Range Intersection_in_Range(Range *pRange, Range* other);
////    return range.Intersection(this->get_full_range());
  Range temp = get_full_range_in_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec);
  return Intersection_in_Range(range, &temp);
}

int iterator_operatorPlusPlus_for_BinaryOutputStatusSpec(StaticDataMap_for_BinaryOutputStatusSpec *pStaticDataMap_for_BinaryOutputStatusSpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_BinarySpec = false;
  pStaticDataMap_for_BinaryOutputStatusSpec->map[i].selection_in_StaticDataCell.selected = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_BinaryOutputStatusSpec->selected = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec);
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
    pStaticDataMap_for_BinaryOutputStatusSpec->selected.start = 
                  IndexMass2KeyMap_for_BinaryOutputStatusSpec(pStaticDataMap_for_BinaryOutputStatusSpec->db_config, i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_BinarySpec)
    if ( pStaticDataMap_for_BinaryOutputStatusSpec->map[i].selection_in_StaticDataCell.selected)
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
