TARGET = tp_pipeline_pcl
TEMPLATE = lib

DEFINES += TP_PIPELINE_PCL_LIBRARY

SOURCES += src/Globals.cpp
HEADERS += inc/tp_pipeline_pcl/Globals.h


#-- Delegates --------------------------------------------------------------------------------------
SOURCES += src/step_delegates/StubStepDelegate.cpp
HEADERS += inc/tp_pipeline_pcl/step_delegates/StubStepDelegate.h


#-- Members ----------------------------------------------------------------------------------------
SOURCES += src/members/StubMember.cpp
HEADERS += inc/tp_pipeline_pcl/members/StubMember.h
