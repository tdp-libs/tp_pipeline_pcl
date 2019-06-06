#include "tp_pipeline_pcl/step_delegates/StubStepDelegate.h"

#include "tp_pipeline/StepDetails.h"
#include "tp_pipeline/StepInput.h"

#include "tp_data/Collection.h"

namespace tp_pipeline_pcl
{

//##################################################################################################
StubStepDelegate::StubStepDelegate():
  tp_pipeline::AbstractStepDelegate("", {pclSID()})
{

}

//##################################################################################################
void StubStepDelegate::executeStep(tp_pipeline::StepDetails* stepDetails,
                                               const tp_pipeline::StepInput& input,
                                               tp_data::Collection& output) const
{
  TP_UNUSED(stepDetails);
  TP_UNUSED(input);
  TP_UNUSED(output);
}

//##################################################################################################
void StubStepDelegate::fixupParameters(tp_pipeline::StepDetails* stepDetails) const
{
  stepDetails->setOutputNames({"Output image"});

  std::vector<tp_utils::StringID> validParams;
//  const auto& parameters = stepDetails->parameters();

//  {
//    const auto& name = tp_pipeline_image_utils::colorImageSID();
//    auto param = tpGetMapValue(parameters, name);
//    param.name = name;
//    param.description = "The source color image to draw on.";
//  param.setNamedData();

//    stepDetails->setParamerter(param);
//    validParams.push_back(name);
//  }

//  {
//    const auto& name = tp_pipeline_math_utils::polygonsSID();
//    auto param = tpGetMapValue(parameters, name);
//    param.name = name;
//    param.description = "The polygons to draw.";
//  param.setNamedData();

//    stepDetails->setParamerter(param);
//    validParams.push_back(name);
//  }

  stepDetails->setParametersOrder(validParams);
  stepDetails->setValidParameters(validParams);
}

}
