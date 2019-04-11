#ifndef tp_pipeline_pcl_Globals_h
#define tp_pipeline_pcl_Globals_h

#include "tp_utils/StringID.h"

namespace tp_pipeline
{
class StepDelegateMap;
}

//##################################################################################################
//! Add pcl to the pipeline pipeline.
namespace tp_pipeline_pcl
{
TDP_DECLARE_ID(                   pclSID,                       "Pcl")

//##################################################################################################
//! Add the step delegates that this module provides to the StepDelegateMap
void createStepDelegates(tp_pipeline::StepDelegateMap& stepDelegates);
}

#endif
