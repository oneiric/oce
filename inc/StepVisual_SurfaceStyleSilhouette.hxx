// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_SurfaceStyleSilhouette_HeaderFile
#define _StepVisual_SurfaceStyleSilhouette_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_SurfaceStyleSilhouette_HeaderFile
#include <Handle_StepVisual_SurfaceStyleSilhouette.hxx>
#endif

#ifndef _Handle_StepVisual_CurveStyle_HeaderFile
#include <Handle_StepVisual_CurveStyle.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepVisual_CurveStyle;



class StepVisual_SurfaceStyleSilhouette : public MMgt_TShared {

public:

  //! Returns a SurfaceStyleSilhouette <br>
  Standard_EXPORT   StepVisual_SurfaceStyleSilhouette();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepVisual_CurveStyle)& aStyleOfSilhouette) ;
  
  Standard_EXPORT     void SetStyleOfSilhouette(const Handle(StepVisual_CurveStyle)& aStyleOfSilhouette) ;
  
  Standard_EXPORT     Handle_StepVisual_CurveStyle StyleOfSilhouette() const;




  DEFINE_STANDARD_RTTI(StepVisual_SurfaceStyleSilhouette)

protected:




private: 


Handle_StepVisual_CurveStyle styleOfSilhouette;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif