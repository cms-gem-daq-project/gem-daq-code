#ifndef gem_hw_vmeDisc_VMEDISCManager_h
#define gem_hw_vmeDisc_VMEDISCManager_h

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/format.hpp>

#include <string>

#include "xdata/String.h"
#include "xdata/UnsignedLong.h"
#include "xdata/UnsignedInteger32.h"

#include "xgi/framework/Method.h"
#include "cgicc/HTMLClasses.h" 

#include "gem/base/GEMFSMApplication.h"

namespace gem {
  namespace base{
    //Uncomment what is necessary
    //class GEMApplication;
    //class GEMFSM;
    //class GEMFSMApplication;
    //class GEMWebApplication;
  }

  namespace hw {

    namespace vmeDisc {

      class HwVMEDISC;
      
      //friend class VMEDISCManagerWebVME;

      //It should be one of the two lines, choose the one that is required
      //class VMEDISCManagerVME: public gem::base::GEMWebApplication, public gem::base::GEMFSMApplication
      class VMEDISCManagerVME: public xdaq::WebApplication, public xdata::ActionListener 
	{

	  public:
	  //public data members
	  //===================
	  /* define public data members here */

	  //public methods
	  //==============
	  //XDAQ_INSTANTIATOR();

	  //Constructor
	  VMEDISCManagerVME(/* parameters */);

	  //Destructor
	  ~VMEDISCManagerVME();

	  /* define additional public methods below */

	protected:
	  //protected data members
	  //======================
	  /* define protected data members here */

	  //protected methods
	  //=================
	  /* define protected methods below */

      }; //End class VMEDISCManagerVME

    } //End namespace gem::hw::vmeDisc

  } //End namespace gem::hw

} //End namespace gem

#endif
