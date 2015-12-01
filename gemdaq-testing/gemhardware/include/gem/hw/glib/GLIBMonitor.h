/** @file GLIBMonitor.h */ 

#ifndef gem_hw_glib_GLIBMonitor_h
#define gem_hw_glib_GLIBMonitor_h

#include "gem/base/GEMMonitor.h"
#include "gem/hw/glib/exception/Exception.h"
#include "gem/hw/glib/HwGLIB.h"

namespace gem {
  namespace hw {
    namespace glib {
      
      class HwGLIB;
      class GLIBManager;
      
      class GLIBMonitor : public gem::base::GEMMonitor
      {
      public:

        /**
         * Constructor from GEMFSMApplication derived classes
         * @param glib the HwGLIB uhal device which is to be monitored
         * @param glibManager the manager application for the GLIB to be monitored
         */
        GLIBMonitor(std::shared_ptr<HwGLIB> glib, GLIBManager* glibManager, int const& index);
        
        virtual ~GLIBMonitor();
        
        virtual void updateMonitorables();
        void setupHwMonitoring();
        void buildMonitorPage(xgi::Output* out);
        std::string getDeviceID() { return p_glib->getDeviceID(); }
        
      private:
        std::shared_ptr<HwGLIB> p_glib;
        
        // system_monitorables
        //  "BOARD_ID"
        //  "SYSTEM_ID"
        //  "FIRMWARE_ID"
        //  "FIRMWARE_DATE"
        //  "IP_ADDRESS"
        //  "MAC_ADDRESS"
        //  "SFP1_STATUS"
        //  "SFP2_STATUS"
        //  "SFP3_STATUS"
        //  "SFP4_STATUS"
        //  "FMC1_STATUS"
        //  "FMC2_STATUS"
        //  "FPGA_RESET"
        //  "GBE_INT"
        //  "V6_CPLD"
        //  "CPLD_LOCK"
          
      }; // end class GLIBMonitor
            
    }// end namespace gem::hw::glib
  }// end namespace gem::hw
}// end namespace gem

#endif