#ifndef gem_hw_vmeBridge_HwVMEBRIDGE_h
#define gem_hw_vmeBridge_HwVMEBRIDGE_h

//Common includes for all devices
#include "xdaq/Application.h"

#include "xdata/String.h"
#include "xdata/UnsignedLong.h"
#include "xdata/UnsignedInteger32.h"
#include "xdata/ActionListener.h"

#include "gem/hw/vmeBridge/exception/Exception.h"

//Parent class (uTCA based?)
//#include "gem/hw/GEMHwDevice.h"

//Parent class (VME based)
//#include "gem/hw/GEMHwDeviceVME.h" //<--- Need to make this

//This might be uTCA based...?
typedef uhal::exception::exception uhalException;
//typedef hal::exception::exception halException; //<--- VME?

//This might be uTCA based...?
namespace uhal {	class HwInterface;}
//namespace hal {	class HwInterface;}	//<--- VME?

namespace gem {
  namespace hw {
    namespace vmeBridge {
      
      class HwVMEBRIDGE: public gem::hw::GEMHwDeviceVME
	{

	public:
	  //public data members
	  //===================
	  /* define public data members here */

	  //public methods
	  //==============
	  //XDAQ_INSTANTIATOR();

	  //Constructor
	  HwVMEBRIDGE(/* parameters */);

	  //Destructor
	  ~HwVMEBRIDGE();

	  /* define additional public methods below */

	protected:
	  //protected data members
	  //======================
	  /* define protected data members here */

	  //protected methods
	  //=================
	  /* define protected methods below */

	}; //end class HwVMEBRIDGE

    } //end namespace gem::hw::vmeBridge
  } //end namespace gem::hw
} //end namespace gem

#endif
