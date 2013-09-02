/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_otapi_WRAP_H_
#define SWIG_otapi_WRAP_H_

class SwigDirector_OTCallback : public OTCallback, public Swig::Director {

public:
    SwigDirector_OTCallback();
    virtual ~SwigDirector_OTCallback();
    virtual void runOne(char const *szDisplay, OTPassword &theOutput);
    virtual void runTwo(char const *szDisplay, OTPassword &theOutput);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(char *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(char *, void *);
    void swig_connect_director(SWIG_Callback0_t callbackrunOne, SWIG_Callback1_t callbackrunTwo);

private:
    SWIG_Callback0_t swig_callbackrunOne;
    SWIG_Callback1_t swig_callbackrunTwo;
    void swig_init_callbacks();
};


#endif
