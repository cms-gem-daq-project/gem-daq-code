#ifndef gem_hwMonitor_gemHwMonitorWeb_h
#define gem_hwMonitor_gemHwMonitorWeb_h

#include "xdaq/WebApplication.h"
#include "xgi/framework/Method.h"
#include "cgicc/HTMLClasses.h"

#include "gemHwMonitorBase.h"

namespace cgicc {
    BOOLEAN_ELEMENT(section,"section");
}
namespace gem {
    namespace hwMonitor {
        class gemHwMonitorWeb: public xdaq::WebApplication//, xdata::ActionListener
        {
	        public:
                XDAQ_INSTANTIATOR();
		        gemHwMonitorWeb(xdaq::ApplicationStub *s)
                    throw (xdaq::exception::Exception);
                ~gemHwMonitorWeb(){delete gemHwMonitorBase_;}
                //void createHeader(xgi::Input *in, xgi::Output *out )
        		    //throw (xgi::exception::Exception);
                void Default(xgi::Input *in, xgi::Output *out )
		            throw (xgi::exception::Exception);
		        void controlPanel(xgi::Input *in, xgi::Output *out)
		            throw (xgi::exception::Exception);
		        void showCratesAvailability(xgi::Input *in, xgi::Output *out)
		            throw (xgi::exception::Exception);
                void setConfFile(xgi::Input *in, xgi::Output *out)
		            throw (xgi::exception::Exception);
/*
                static void createVFATInfoLayout(       xgi::Output *out,
                        const gem::hw::vfat::VFAT2ControlParams params){}
                static void createControlRegisterLayout(xgi::Output *out,
                        const gem::hw::vfat::VFAT2ControlParams params){}
                static void createSettingsLayout(       xgi::Output *out,
                        const gem::hw::vfat::VFAT2ControlParams params){}
                static void createCounterLayout(        xgi::Output *out,
                        const gem::hw::vfat::VFAT2ControlParams params){}
                static void createChannelRegisterLayout(xgi::Output *out,
                        const gem::hw::vfat::VFAT2ControlParams params){}
                static void createCommandLayout(        xgi::Output *out,
                        const gem::hw::vfat::VFAT2ControlParams params){}

                static void getCurrentParametersAsXML(){}
                static void saveCurrentParametersAsXML(){}
                static void setParametersByXML(){}
*/
            private:
                gem::hwMonitor::gemHwMonitorBase *gemHwMonitorBase_;
        };// end class gemHwMonitorWeb
    }// end namespace hwMonitor
}// end namespace gem
#endif