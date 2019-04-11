#include "tp_pipeline_pcl/Globals.h"
//#include "tp_pipeline_pcl/step_delegates/StubStepDelegate.h"

#include "tp_pipeline/StepDelegateMap.h"

//##################################################################################################
namespace tp_pipeline_pcl
{
TDP_DEFINE_ID(                   pclSID,                       "Pcl")

//##################################################################################################
void createStepDelegates(tp_pipeline::StepDelegateMap& stepDelegates)
{
  TP_UNUSED(stepDelegates);
  //stepDelegates.addStepDelegate(new StubStepDelegate);
}
}
