#include "tp_pipeline_pcl/Globals.h"
//#include "tp_pipeline_pcl/step_delegates/StubStepDelegate.h"

#include "tp_pipeline/StepDelegateMap.h"

//##################################################################################################
namespace tp_pipeline_pcl
{
TDP_DEFINE_ID(                   pclSID,                       "Pcl")

//##################################################################################################
void createStepDelegates(tp_pipeline::StepDelegateMap& stepDelegates, const tp_data::CollectionFactory* collectionFactory)
{
  TP_UNUSED(stepDelegates);
  TP_UNUSED(collectionFactory);
  //stepDelegates.addStepDelegate(new StubStepDelegate);
}

REGISTER_CREATE_STEP_DELEGATES;

//##################################################################################################
int staticInit()
{
  return 0;
}

}
