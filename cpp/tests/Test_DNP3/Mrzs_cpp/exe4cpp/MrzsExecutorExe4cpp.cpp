#include "log_info.h"

#include "header_dnp3.h"
#include "MrzsExecutorExe4cpp.h"

void MrzsExecutor_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{MrzsExecutor_in_MrzsExecutor1"<<'\n';
  std::cout<<"*MrzsExecutor *pMrzsExecutor= "<<(uint32_t)pMrzsExecutor<<'\n';
#endif
  ISteadyTimeSourceExe4cpp_in_ISteadyTimeSourceExe4cpp(&(pMrzsExecutor->iIExecutorExe4cpp.iISteadyTimeSourceExe4cpp));

  pMrzsExecutor->current_time = 333;
  pMrzsExecutor->num_timer_cancel_ = 0;

  pMrzsExecutor->iIExecutorExe4cpp.pPost_in_IExecutorExe4cpp = post_in_MrzsExecutor_override;
  pMrzsExecutor->iIExecutorExe4cpp.pStart_in_IExecutorExe4cpp = Start_in_MrzsExecutor_override;

  setParentPointer_in_IExecutorExe4cpp(&(pMrzsExecutor->iIExecutorExe4cpp), pMrzsExecutor);
  setParentPointer_in_ISteadyTimeSourceExe4cpp(&(pMrzsExecutor->iIExecutorExe4cpp.iISteadyTimeSourceExe4cpp), pMrzsExecutor);
#ifdef  LOG_INFO
  std::cout<<"}MrzsExecutor_in_MrzsExecutor_"<<'\n';
#endif
}

/**	@return true if an action was run. */
boolean run_one_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor)
{
////        this->check_for_expired_timers();
/*
  if (pMrzsExecutor->post_queue.size() > 0)
  {
////            auto runnable = post_queue.front();
    void* runnable = pMrzsExecutor->post_queue.front();
    pMrzsExecutor->post_queue.pop_front();
////            runnable();
////---    runnable();
//    VOIDVOID_FUNCTION(runnable)();
    return true;
  }
  else
  {
    return false;
  }
*/
}

void post_in_MrzsExecutor_override(void *pIExecutorExe4cpp, void (*pAction)(void))
{
  MrzsExecutor* parent = (MrzsExecutor*) getParentPointer_in_IExecutorExe4cpp((IExecutorExe4cpp*) pIExecutorExe4cpp);
  post_in_MrzsExecutor(parent, pAction);
}

void post_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor, void (*pAction)(void))
{
//  pMrzsExecutor->post_queue.push_back((void*)pAction);
}

uint16_t run_many_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor, uint16_t maximum)////size_t maximum = std::numeric_limits<size_t>::max())
{
  uint16_t num = 0;
  while (num < maximum && run_one_in_MrzsExecutor(pMrzsExecutor)) ++num;////this->run_one()) ++num;
  return num;
}
/*
uint64_t Get_time_in_ISteadyTimeSourceExe4cpp_override(void* pIExecutorExe4cpp)
{
  MrzsExecutor* parent = (MrzsExecutor*) getParentPointer_in_ISteadyTimeSourceExe4cpp(&(((IExecutorExe4cpp*) pIExecutorExe4cpp)->iISteadyTimeSourceExe4cpp));
  return get_time_in_MrzsExecutor(parent);
}
*/
uint64_t get_time_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor)
{
  return pMrzsExecutor->current_time;
}

TimerExe4cpp Start_in_MrzsExecutor_override(void *pIExecutorExe4cpp, uint32_t duration, void (*pAction)(void))
{
  MrzsExecutor* parent = (MrzsExecutor*) getParentPointer_in_IExecutorExe4cpp((IExecutorExe4cpp*) pIExecutorExe4cpp);
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{Start_in_MrzsExecutor_override1"<<'\n';
  std::cout<<"*MrzsExecutor *pMrzsExecutor= "<<(uint32_t)parent<<'\n';
#endif

  TimerExe4cpp tmp = Start_in_MrzsExecutor(parent, duration, pAction);

#ifdef  LOG_INFO
  std::cout<<"}Start_in_MrzsExecutor_override_"<<'\n';
#endif
  return tmp;
}

TimerExe4cpp Start_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor, uint32_t delay, void (*pAction)(void))
{
////        return start(current_time + delay, action);
  return Start_in_MrzsExecutorOver2(pMrzsExecutor, pMrzsExecutor->current_time+delay, pAction);
}

////    virtual Timer start(const duration_t& delay, const action_t& action) override
////    {
////        return start(current_time + delay, action);
////    }

////    virtual Timer start(const steady_time_t& time, const action_t& action) override
TimerExe4cpp Start_in_MrzsExecutorOver2(MrzsExecutor *pMrzsExecutor, uint32_t duration, void (*pAction)(void))
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{Start_in_MrzsExecutorOver2_1"<<'\n';
  std::cout<<"*uint32_t duration= "<<duration<<'\n';
  std::cout<<"*MrzsExecutor *pMrzsExecutor= "<<(uint32_t)pMrzsExecutor<<'\n';
#endif
//    void MrzsTimer_in_MrzsTimer(MrzsTimer *pMrzsTimer, void* source, uint32_t timeMrzsTimer, void (*pAction)(void));
////        const auto timer = std::make_shared<MrzsTimer>(this, time, action);
  MrzsTimer timer;
  MrzsTimer_in_MrzsTimer(&timer, pMrzsExecutor, duration, pAction);

//  pMrzsExecutor->timers.push_back(timer);
//   void TimerExe4cpp_in_TimerExe4cpp(TimerExe4cpp *pTimerExe4cpp, ITimer* tim)
////        return Timer{timer};
  TimerExe4cpp tTimerExe4cpp;
  TimerExe4cpp_in_TimerExe4cppOver2(&tTimerExe4cpp, &(timer.iITimer));

#ifdef  LOG_INFO
  std::cout<<"*tTimerExe4cpp.iITimer.psource_in_ITimer="<<(uint32_t)tTimerExe4cpp.timerExe4cpp.psource_in_ITimer<<'\n';
  std::cout<<"}Start_in_MrzsExecutorOver2__"<<'\n';
#endif
  return tTimerExe4cpp;
}

void cancel_in_MrzsExecutor(/*MrzsExecutor *pMrzsExecutor,*/ ITimer* timer)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{cancel_in_MrzsExecutor1"<<'\n';
  std::cout<<"*MrzsExecutor *pMrzsExecutor= "<<(uint32_t)(timer->psource_in_ITimer)<<'\n';
#endif
//  MrzsExecutor *pMrzsExecutor = (MrzsExecutor *)(timer->psource_in_ITimer);
////        const auto result = std::find_if(pMrzsExecutor->timers.begin(), pMrzsExecutor->timers.end(), [timer](const std::shared_ptr<MrzsTimer>& item)
////        {
////            return item.get() == timer;
////        });
////
////        if (result != this->timers.end())
////        {
//  ++(pMrzsExecutor->num_timer_cancel_);
////            pMrzsExecutor->timers.erase(result);
////        }
//            pMrzsExecutor->timers.clear();//erase(result);
#ifdef  LOG_INFO
  std::cout<<"}cancel_in_MrzsExecutor_"<<'\n';
#endif
}

//--------------------------------MrzsTimer--------------------------------------------
void MrzsTimer_in_MrzsTimer(MrzsTimer *pMrzsTimer, void* source, uint32_t timeMrzsTimer, void (*pAction)(void))
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{MrzsTimer_in_MrzsTimer1"<<'\n';
  std::cout<<"*cancel_in_MrzsTimer_override="<<(uint32_t)cancel_in_MrzsTimer_override<<'\n';
#endif
  pMrzsTimer->timeMrzsTimer = timeMrzsTimer;
  pMrzsTimer->source = source;
  pMrzsTimer->action = (void*)pAction;

  pMrzsTimer->iITimer.psource_in_ITimer     = source;
  pMrzsTimer->iITimer.pcancel_in_ITimer     = cancel_in_MrzsTimer_override;
  pMrzsTimer->iITimer.pexpires_at_in_ITimer = expires_at_in_MrzsTimer_override;

  setParentPointer_in_ITimer(&(pMrzsTimer->iITimer), pMrzsTimer);
#ifdef  LOG_INFO
  std::cout<<"}MrzsTimer_in_MrzsTimer_"<<'\n';
#endif
}

void cancel_in_MrzsTimer(ITimer *pITimer)//MrzsTimer *pMrzsTimer)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{cancel_in_MrzsTimer1"<<'\n';
#endif
////            source->cancel(this);
  cancel_in_MrzsExecutor(/*(MrzsExecutor*)pMrzsTimer->source,*/ pITimer);//&(pMrzsTimer->iITimer));
#ifdef  LOG_INFO
  std::cout<<"}cancel_in_MrzsTimer_"<<'\n';
#endif
}
void cancel_in_MrzsTimer_override(void *pITimer)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{cancel_in_MrzsTimer_override1"<<'\n';
#endif
  //MrzsTimer* parent = (MrzsTimer*) getParentPointer_in_ITimer((ITimer*) pITimer);
  cancel_in_MrzsTimer((ITimer*)pITimer);//parent);
#ifdef  LOG_INFO
  std::cout<<"}cancel_in_MrzsTimer_override_"<<'\n';
#endif
}

uint32_t expires_at_in_MrzsTimer(MrzsTimer *pMrzsTimer)
{
  return pMrzsTimer->timeMrzsTimer;
}

uint32_t expires_at_in_MrzsTimer_override(void *pITimer)
{
  MrzsTimer* parent = (MrzsTimer*) getParentPointer_in_ITimer((ITimer*) pITimer);
  return expires_at_in_MrzsTimer(parent);
}

uint16_t advance_time_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor, uint32_t duration)
{
////        this->add_time(duration);
        add_time_in_MrzsExecutor(pMrzsExecutor, duration);
        return 0;////this->check_for_expired_timers();
}

  // doesn't check timers_
////    void add_time(duration_t duration)
void add_time_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor, uint32_t duration)
{
////        this->current_time += duration;
  pMrzsExecutor->current_time += duration;
}

uint16_t num_pending_timers_in_MrzsExecutor(MrzsExecutor *pMrzsExecutor)
{
////        return this->timers.size();
       return 0;//pMrzsExecutor->timers.size();
}
