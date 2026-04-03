#include "log_info.h"

#include "header_dnp3.h"
#include "StaticDataMap.h"
#include "StaticDataMap_for_TimeAndInterval.h"

uint16_t MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec)
{
  return pStaticDataMap_for_TimeAndIntervalSpec->db_config->time_and_interval_count;
}

void setMapSize_DatabaseConfig_for_TimeAndIntervalSpec(DatabaseConfig *pDatabaseConfig, uint16_t db_size)
{
  pDatabaseConfig->time_and_interval_count = db_size;
}

void StaticDataMap_for_TimeAndInterval_in_StaticDataMap_for_TimeAndIntervalOver1(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap)
{
  Range_in_RangeOver1(&(pStaticDataMap->selected));
}
////template<class Spec> StaticDataMap<Spec>::StaticDataMap(const std::map<uint16_t, typename Spec::config_t>& config)
//void StaticDataMap_for_TimeAndIntervalSpec_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap, std::map<uint16_t, TimeAndIntervalConfig>& config)
void StaticDataMap_for_TimeAndIntervalSpec_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap, DatabaseConfig* config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"StaticDataMap_for_TimeAndIntervalSpec_in_StaticDataMap_for_TimeAndIntervalSpecOver2_1"<<'\n';
#endif

  StaticDataMap_for_TimeAndInterval_in_StaticDataMap_for_TimeAndIntervalOver1(pStaticDataMap);
  pStaticDataMap->db_config = config;

//  for (const auto& item : config)
  for (int i=0; i<MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap); i++)
  {
//void StaticDataCell_for_TimeAndInterval_in_StaticDataCell_for_TimeAndIntervalOver1(StaticDataCell_for_TimeAndInterval *pStaticDataCell_for_TimeAndInterval,
//    TimeAndIntervalConfig* config);
////        pStaticDataMap->map[item.first] = StaticDataCell<Spec>{item.second};
//    TimeAndIntervalConfig temp = item.second;
    TimeAndIntervalConfig temp = pStaticDataMap->db_config->time_and_interval_config[i];
    StaticDataCell_for_TimeAndInterval sStaticDataCell_for_TimeAndInterval;
    StaticDataCell_for_TimeAndInterval_in_StaticDataCell_for_TimeAndIntervalOver2(&sStaticDataCell_for_TimeAndInterval, &temp);
//    pStaticDataMap->map[item.first] = sStaticDataCell_for_TimeAndInterval;
    pStaticDataMap->map[i] = sStaticDataCell_for_TimeAndInterval;
  }
#ifdef  LOG_INFO
  decrement_stack_info();
#endif
}

Range get_selected_range_in_StaticDataMap_for_TimeAndIntervalSpec(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec)
{
  return pStaticDataMap_for_TimeAndIntervalSpec->selected;
}
/*
typename StaticDataMap_for_TimeAndIntervalSpec::iterator StaticDataMap_for_TimeAndIntervalSpec::begin()
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
void clear_selection_in_StaticDataMap_for_TimeAndIntervalSpec(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec)
{
  // the act of iterating clears the selection
//  for (auto iter = pStaticDataMap_for_TimeAndIntervalSpec->begin(); iter != pStaticDataMap_for_TimeAndIntervalSpec->end(); ++iter)
//  {
//  }
  Range_in_RangeOver1(&(pStaticDataMap_for_TimeAndIntervalSpec->selected));
}
/*
////template<class Spec> typename StaticDataMap<Spec>::iterator StaticDataMap<Spec>::end()
typename StaticDataMap_for_TimeAndIntervalSpec::iterator StaticDataMap_for_TimeAndIntervalSpec::end()
{
  return iterator(this->map.end(), this->map.end(), this->selected);
}
*/
////template<class Spec>
////typename Spec::static_variation_t check_for_promotion(const typename Spec::meas_t& value,
////                                                      typename Spec::static_variation_t variation)
StaticTimeAndIntervalVariation_uint8_t check_for_promotion_for_TimeAndIntervalSpec_static(TimeAndInterval* value, StaticTimeAndIntervalVariation_uint8_t variation)
{
  UNUSED(value);
  return variation;
}

StaticTimeAndIntervalVariation_uint8_t get_variation_in_StaticDataMap_for_TimeAndIntervalSpecOver1(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index);
StaticTimeAndIntervalVariation_uint8_t get_variation_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index);

StaticTimeAndIntervalVariation_uint8_t get_variation_in_StaticDataMap_for_TimeAndIntervalSpecOver1(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index)
{
  return pStaticDataMap_for_TimeAndIntervalSpec->map[index].config_in_StaticDataCell.svariation;
}
StaticTimeAndIntervalVariation_uint8_t get_variation_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index)
{
  UNUSED(pStaticDataMap_for_TimeAndIntervalSpec);
  UNUSED(index);
  StaticTimeAndIntervalVariation_uint8_t *var = (StaticTimeAndIntervalVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

uint16_t select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver1(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec)
{
////  return select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3(pStaticDataMap_for_TimeAndIntervalSpec, [](auto var) {
////    return var;
////  }); // use the default
  return select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3(pStaticDataMap_for_TimeAndIntervalSpec, get_variation_in_StaticDataMap_for_TimeAndIntervalSpecOver1);
}

uint16_t select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, StaticTimeAndIntervalVariation_uint8_t variation)
{
////  return select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3(pStaticDataMap_for_TimeAndIntervalSpec, [variation](auto var) {
////    return variation;
////  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3(pStaticDataMap_for_TimeAndIntervalSpec, get_variation_in_StaticDataMap_for_TimeAndIntervalSpecOver2);
  return tmp;
}

uint16_t select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec,
    StaticTimeAndIntervalVariation_uint8_t (*get_variation)(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index)
                                                                 ) //, F get_variation)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3_1"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_TimeAndIntervalSpec= "<<(uint32_t)pStaticDataMap_for_TimeAndIntervalSpec<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_TimeAndIntervalSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_TimeAndIntervalSpec->selected.start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*pStaticDataMap_for_TimeAndIntervalSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_TimeAndIntervalSpec->selected.stop<<'\n';
#endif

//  if (pStaticDataMap_for_TimeAndIntervalSpec->map.empty())
  if (MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec) == 0)
  {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3_2"<<'\n';
    decrement_stack_info();
#endif
    return 0;
  }
  else
  {
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////        this->selected = Range::From(map.begin()->first, map.rbegin()->first);
//    pStaticDataMap_for_TimeAndIntervalSpec->selected = From_in_Range_static(pStaticDataMap_for_TimeAndIntervalSpec->map.begin()->first,
//        pStaticDataMap_for_TimeAndIntervalSpec->map.rbegin()->first);
    pStaticDataMap_for_TimeAndIntervalSpec->selected =
      From_in_Range_static(IndexMass2KeyMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec->db_config, 0),
                           IndexMass2KeyMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec->db_config,
          MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec)-1));
//             pStaticDataMap_for_TimeAndIntervalSpec->db_config->TimeAndInterval_input_count-1);
//        pStaticDataMap_for_TimeAndIntervalSpec->map.rbegin()->first);

//    for (auto& iter : pStaticDataMap_for_TimeAndIntervalSpec->map)
    for(int i=0; i<MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec); i++)
    {
// StaticTimeAndIntervalVariation_uint8_t check_for_promotion_for_TimeAndIntervalSpec(TimeAndInterval* value, StaticTimeAndIntervalVariation_uint8_t variation);
//void SelectedValue_for_TimeAndIntervalSpec_in_SelectedValue_for_TimeAndIntervalSpecOver2(SelectedValue_for_TimeAndIntervalSpec *pSelectedValue_for_TimeAndIntervalSpec,
//                                          boolean selected, TimeAndInterval* value, StaticTimeAndIntervalVariation_uint8_t variation);
////            iter.second.selection = SelectedValue<Spec>{
////                true, iter.second.value,
////                check_for_promotion<Spec>(iter.second.value, get_variation(iter.second.config.svariation))};
      SelectedValue_for_TimeAndIntervalSpec sSelectedValue_for_TimeAndIntervalSpec;
      SelectedValue_for_TimeAndIntervalSpec_in_SelectedValue_for_TimeAndIntervalSpecOver2(&sSelectedValue_for_TimeAndIntervalSpec,
//          true, &iter.second.value_in_StaticDataCell,
          true, &(pStaticDataMap_for_TimeAndIntervalSpec->map[i].value_in_StaticDataCell),
//          check_for_promotion_for_TimeAndIntervalSpec_static(&iter.second.value_in_StaticDataCell,
//                      get_variation(iter.second.config_in_StaticDataCell.eEventConfig.svariation)));
          check_for_promotion_for_TimeAndIntervalSpec_static(&(pStaticDataMap_for_TimeAndIntervalSpec->map[i].value_in_StaticDataCell),
              get_variation(pStaticDataMap_for_TimeAndIntervalSpec, i)));

#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3_3"<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*sSelectedValue_for_TimeAndIntervalSpec.variation= "<<(uint16_t)sSelectedValue_for_TimeAndIntervalSpec.variation<<'\n';
//  std::cout<<"*"<<getString_stack_info();
//  std::cout<<"*iter.second.config.eEventConfig.svariation= "<<(uint16_t)iter.second.config_in_StaticDataCell.eEventConfig.svariation<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_TimeAndIntervalSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_TimeAndIntervalSpec->selected.start<<'\n';
      std::cout<<"*"<<getString_stack_info();
      std::cout<<"*pStaticDataMap_for_TimeAndIntervalSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_TimeAndIntervalSpec->selected.stop<<'\n';
#endif
//      iter.second.selection_in_StaticDataCell_for_TimeAndInterval = sSelectedValue_for_TimeAndIntervalSpec;
      pStaticDataMap_for_TimeAndIntervalSpec->map[i].selection_in_StaticDataCell = sSelectedValue_for_TimeAndIntervalSpec;
    }//for

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"select_all_in_StaticDataMap_for_TimeAndIntervalSpecOver3_4"<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_TimeAndIntervalSpec->selected.start= "<<(uint16_t)pStaticDataMap_for_TimeAndIntervalSpec->selected.start<<'\n';
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*pStaticDataMap_for_TimeAndIntervalSpec->selected.stop= "<<(uint16_t)pStaticDataMap_for_TimeAndIntervalSpec->selected.stop<<'\n';
    decrement_stack_info();
#endif
//    return pStaticDataMap_for_TimeAndIntervalSpec->map.size();
    return MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec);
  }
}

StaticTimeAndIntervalVariation_uint8_t get_variation_in_in_StaticDataMap_for_TimeAndIntervalSpecOver1(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index);
StaticTimeAndIntervalVariation_uint8_t get_variation_in_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index);

StaticTimeAndIntervalVariation_uint8_t get_variation_in_in_StaticDataMap_for_TimeAndIntervalSpecOver1(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index)
{
  return pStaticDataMap_for_TimeAndIntervalSpec->map[index].config_in_StaticDataCell.svariation;
}
StaticTimeAndIntervalVariation_uint8_t get_variation_in_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index)
{
  UNUSED(pStaticDataMap_for_TimeAndIntervalSpec);
  UNUSED(index);
  StaticTimeAndIntervalVariation_uint8_t *var = (StaticTimeAndIntervalVariation_uint8_t*)pPointerGlobal4;
  return *var;
}

////    size_t select(Range range)
uint16_t select_in_StaticDataMap_for_TimeAndIntervalSpecOver1(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, Range range)
{
////        return this->select(range, [](auto var) { return var; }); // use the default
//  return select_in_StaticDataMap_for_TimeAndIntervalSpecOver5(pStaticDataMap_for_TimeAndIntervalSpec, range, [](auto var) {
//    return var;
//  }); // use the default
  return select_in_StaticDataMap_for_TimeAndIntervalSpecOver5(pStaticDataMap_for_TimeAndIntervalSpec, range, get_variation_in_in_StaticDataMap_for_TimeAndIntervalSpecOver1);
}

////    bool select(uint16_t index, typename Spec::static_variation_t variation)
boolean select_in_StaticDataMap_for_TimeAndIntervalSpecOver2(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, uint16_t index, StaticTimeAndIntervalVariation_uint8_t variation)
{
////        return this->select(Range::From(index, index), variation);
  return select_in_StaticDataMap_for_TimeAndIntervalSpecOver4(pStaticDataMap_for_TimeAndIntervalSpec, From_in_Range_static(index, index), variation) == 1;
}

////    bool select(uint16_t index)
boolean select_in_StaticDataMap_for_TimeAndIntervalSpecOver3(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, uint16_t index)
{
////        return this->select(Range::From(index, index)) == 1;
  return select_in_StaticDataMap_for_TimeAndIntervalSpecOver1(pStaticDataMap_for_TimeAndIntervalSpec, From_in_Range_static(index, index)) == 1;
}

////    size_t select(Range range, typename Spec::static_variation_t variation)
uint16_t select_in_StaticDataMap_for_TimeAndIntervalSpecOver4(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, Range range, StaticTimeAndIntervalVariation_uint8_t variation)
{
////        return this->select(range, [variation](auto var) { return variation; }); // override default
//  return select_in_StaticDataMap_for_TimeAndIntervalSpecOver5(pStaticDataMap_for_TimeAndIntervalSpec, range, [variation](auto var) {
//    return variation;
//  }); // override default
  pPointerGlobal4 = (void *)&variation;
  uint16_t tmp = select_in_StaticDataMap_for_TimeAndIntervalSpecOver5(pStaticDataMap_for_TimeAndIntervalSpec, range, get_variation_in_in_StaticDataMap_for_TimeAndIntervalSpecOver2);
  return tmp;
}

uint16_t select_in_StaticDataMap_for_TimeAndIntervalSpecOver5(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, Range range,
    StaticTimeAndIntervalVariation_uint8_t (*get_variation)(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int index))
{
//boolean IsValid_in_Range(Range *pRange);
////    if (!range.IsValid())
  if (!IsValid_in_Range(&range))
  {
    return 0;
  }

////  const auto start = pStaticDataMap_for_DoubleBitBinarySpec->map.lower_bound(range.start);
  uint16_t start = KeyMap2IndexMass_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec->db_config, range.start);

//  if (start == pStaticDataMap_for_DoubleBitBinarySpec->map.end())
  if (start >= MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec))
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
  for (int iter = start; iter != MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec); ++iter)
  {
////        if (!range.Contains(iter->first))
//    if (!Contains_in_Range(&range, iter->first))
    uint16_t iter_first = IndexMass2KeyMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec->db_config, iter);
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
    TimeAndInterval tTimeAndInterval = pStaticDataMap_for_TimeAndIntervalSpec->map[iter].value_in_StaticDataCell;
    SelectedValue_for_TimeAndIntervalSpec sSelectedValue_for_TimeAndIntervalSpec = {
      true, tTimeAndInterval,
//        check_for_promotion_for_DoubleBitBinarySpec_static(&dDoubleBitBinary,
//              get_variation(iter->second.config_in_StaticDataCell.eEventConfig.svariation))
      check_for_promotion_for_TimeAndIntervalSpec_static(&tTimeAndInterval,
          get_variation(pStaticDataMap_for_TimeAndIntervalSpec, iter))
    };
//    iter->second.selection_in_StaticDataCell = sSelectedValue_for_DoubleBitBinarySpec;
    pStaticDataMap_for_TimeAndIntervalSpec->map[iter].selection_in_StaticDataCell = sSelectedValue_for_TimeAndIntervalSpec;
    ++count;
  }

//Range Union_in_Range(Range *pRange, Range* other);
//Range From_in_Range_static(uint16_t start, uint16_t stop);
////    this->selected = this->selected.Union(Range::From(start->first, stop));
//  Range rRange = From_in_Range_static(start->first, stop);
  Range rRange = From_in_Range_static(range.start, stop);
  pStaticDataMap_for_TimeAndIntervalSpec->selected = Union_in_Range(&(pStaticDataMap_for_TimeAndIntervalSpec->selected), &rRange);

  return count;
}

////    bool has_any_selection() const
boolean has_any_selection_in_StaticDataMap_for_TimeAndIntervalSpec(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec)
{
//boolean IsValid_in_Range(Range *pRange);
////        return this->selected.IsValid();
  return IsValid_in_Range(&(pStaticDataMap_for_TimeAndIntervalSpec->selected));
}
/*
boolean add_in_StaticDataMap_for_TimeAndIntervalSpec(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, TimeAndInterval *value, uint16_t index, TimeAndIntervalConfig *config)
{
  if (pStaticDataMap_for_TimeAndIntervalSpec->map.find(index) != pStaticDataMap_for_TimeAndIntervalSpec->map.end())
  {
    return false;
  }

//void  StaticDataCell_for_TimeAndInterval_in_StaticDataCell_for_TimeAndIntervalOver3(StaticDataCell_for_TimeAndInterval *pStaticDataCell_for_TimeAndInterval,
//    TimeAndInterval* value,
//    TimeAndIntervalConfig* config);
  StaticDataCell_for_TimeAndInterval sStaticDataCell;
  StaticDataCell_for_TimeAndInterval_in_StaticDataCell_for_TimeAndIntervalOver3(&sStaticDataCell, value, config);

  pStaticDataMap_for_TimeAndIntervalSpec->map[index] = sStaticDataCell;////StaticDataCell_for_TimeAndIntervalSpec{value, config};

  return true;
}
*/
int iterator_operatorPlusPlus_for_TimeAndIntervalSpec(StaticDataMap_for_TimeAndIntervalSpec *pStaticDataMap_for_TimeAndIntervalSpec, int i)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{operator++"<<'\n';
#endif

  // unselect the point
////      this->iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_TimeAndIntervalSpec = false;
  pStaticDataMap_for_TimeAndIntervalSpec->map[i].selection_in_StaticDataCell.selected = false;

  while (true)
  {
////        iter++;
    i++;

////        if (iter == this->end)
    if(i == MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec))
    {
////                    this->range = Range::Invalid();
////          this->range = Invalid_in_Range_static();
      pStaticDataMap_for_TimeAndIntervalSpec->selected = Invalid_in_Range_static();
#ifdef  LOG_INFO
      std::cout<<getString_stack_info();
      std::cout<<"}operator++1_"<<'\n';
      std::cout<<getString_stack_info();
      std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
      decrement_stack_info();
#endif
      return MapSize_for_StaticDataMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec);
    }

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"*operator++1"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"*iter->first= "<<i<<'\n';//iter->first<<'\n';
#endif
    // shorten the range
////        this->range.start = iter->first;
//    pStaticDataMap_for_TimeAndIntervalSpec->selected_in_StaticDataMap_for_TimeAndIntervalSpec.start = i;
    pStaticDataMap_for_TimeAndIntervalSpec->selected.start = 
                     IndexMass2KeyMap_for_TimeAndIntervalSpec(pStaticDataMap_for_TimeAndIntervalSpec->db_config, i);//i;

////        if (iter->second.selection_in_StaticDataCell.selected_in_SelectedValue_for_TimeAndIntervalSpec)
    if ( pStaticDataMap_for_TimeAndIntervalSpec->map[i].selection_in_StaticDataCell.selected)
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
