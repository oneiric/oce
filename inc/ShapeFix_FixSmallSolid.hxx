// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_FixSmallSolid_HeaderFile
#define _ShapeFix_FixSmallSolid_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeFix_FixSmallSolid.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <ShapeFix_Root.hxx>
#include <Handle_ShapeBuild_ReShape.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;
class ShapeBuild_ReShape;


//! Fixing solids with small size
class ShapeFix_FixSmallSolid : public ShapeFix_Root
{

public:

  
  //! Construct
  Standard_EXPORT ShapeFix_FixSmallSolid();
  
  //! Set working mode for operator:
  //! - theMode = 0 use both WidthFactorThreshold and VolumeThreshold parameters
  //! - theMode = 1 use only WidthFactorThreshold parameter
  //! - theMode = 2 use only VolumeThreshold parameter
  Standard_EXPORT   void SetFixMode (const Standard_Integer theMode) ;
  
  //! Set or clear volume threshold for small solids
  Standard_EXPORT   void SetVolumeThreshold (const Standard_Real theThreshold = -1.0) ;
  
  //! Set or clear width factor threshold for small solids
  Standard_EXPORT   void SetWidthFactorThreshold (const Standard_Real theThreshold = -1.0) ;
  
  //! Remove small solids from the given shape
  Standard_EXPORT   TopoDS_Shape Remove (const TopoDS_Shape& theShape, const Handle(ShapeBuild_ReShape)& theContext)  const;
  
  //! Merge small solids in the given shape to adjacent non-small ones
  Standard_EXPORT   TopoDS_Shape Merge (const TopoDS_Shape& theShape, const Handle(ShapeBuild_ReShape)& theContext)  const;




  DEFINE_STANDARD_RTTI(ShapeFix_FixSmallSolid)

protected:




private: 

  
  Standard_EXPORT   Standard_Boolean IsThresholdsSet()  const;
  
  Standard_EXPORT   Standard_Boolean IsSmall (const TopoDS_Shape& theSolid)  const;
  
  Standard_EXPORT   Standard_Boolean IsUsedWidthFactorThreshold()  const;
  
  Standard_EXPORT   Standard_Boolean IsUsedVolumeThreshold()  const;

  Standard_Integer myFixMode;
  Standard_Real myVolumeThreshold;
  Standard_Real myWidthFactorThreshold;


};







#endif // _ShapeFix_FixSmallSolid_HeaderFile
