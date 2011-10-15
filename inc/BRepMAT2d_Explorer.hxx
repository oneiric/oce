// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMAT2d_Explorer_HeaderFile
#define _BRepMAT2d_Explorer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _MAT2d_SequenceOfSequenceOfCurve_HeaderFile
#include <MAT2d_SequenceOfSequenceOfCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TColStd_SequenceOfBoolean_HeaderFile
#include <TColStd_SequenceOfBoolean.hxx>
#endif
#ifndef _TopTools_IndexedDataMapOfShapeShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeShape.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Face;
class TopoDS_Wire;
class Geom2d_Curve;
class TopoDS_Shape;
class TColGeom2d_SequenceOfCurve;
class TColStd_SequenceOfBoolean;


//! Construct an explorer from wires, face, set of curves <br>
//!          from Geom2d to compute the bisecting Locus. <br>
class BRepMAT2d_Explorer  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   BRepMAT2d_Explorer();
  
  Standard_EXPORT   BRepMAT2d_Explorer(const TopoDS_Face& aFace);
  //! Clear the contents of <me>. <br>
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Perform(const TopoDS_Face& aFace) ;
  //! Returns the Number of contours. <br>
  Standard_EXPORT     Standard_Integer NumberOfContours() const;
  //! Returns the Number of Curves in the Contour  number <br>
//!            <IndexContour>. <br>
  Standard_EXPORT     Standard_Integer NumberOfCurves(const Standard_Integer IndexContour) const;
  //! Initialisation of  an Iterator on  the curves of <br>
//!            the Contour number <IndexContour>. <br>
  Standard_EXPORT     void Init(const Standard_Integer IndexContour) ;
  //! Return False if there is no more curves on the Contour <br>
//!            initialised by the method Init. <br>
  Standard_EXPORT     Standard_Boolean More() const;
  //! Move to the next curve of the current Contour. <br>
  Standard_EXPORT     void Next() ;
  //! Returns the current curve on the current Contour. <br>
  Standard_EXPORT     Handle_Geom2d_Curve Value() const;
  
  Standard_EXPORT     TopoDS_Shape Shape() const;
  
  Standard_EXPORT    const TColGeom2d_SequenceOfCurve& Contour(const Standard_Integer IndexContour) const;
  
  Standard_EXPORT     Standard_Boolean IsModified(const TopoDS_Shape& aShape) const;
  //! If the shape is not modified, returns the shape itself. <br>
  Standard_EXPORT     TopoDS_Shape ModifiedShape(const TopoDS_Shape& aShape) const;
  
  Standard_EXPORT    const TColStd_SequenceOfBoolean& GetIsClosed() const;





protected:





private:

  //! Construction from a set of cuves from Geom2d. <br>
//! 	        Assume  the   orientation  of  the  closed   lines are <br>
//!          compatible. (ie if A is in B, the orientation of A and B <br>
//!          has to be different. <br>
//! <br>
//!          Assume the explo contains only lines located in the <br>
//!          area where the bisecting locus will be computed. <br>
//! <br>
//!          Assume a line don't cross itself or an other line. <br>
//! <br>
//!          A contour has to be construct in adding each curve in <br>
//!          respect to the sense of the contour. <br>
//! <br>
//!          afirst point of a curve in a contour is equal to the last <br>
//!          point of the precedent curve. <br>
//! <br>
//!          No  control of this  rules is done in the construction <br>
//!          of the explorer <br>
  Standard_EXPORT     void Add(const TopoDS_Wire& Spine,const TopoDS_Face& aFace,TopoDS_Face& aNewFace) ;
  
  Standard_EXPORT     void NewContour() ;
  //! Add the curve <aCurve> at me. <br>
  Standard_EXPORT     void Add(const Handle(Geom2d_Curve)& aCurve) ;


MAT2d_SequenceOfSequenceOfCurve theCurves;
Standard_Integer current;
Standard_Integer currentContour;
TopoDS_Shape myShape;
TColStd_SequenceOfBoolean myIsClosed;
TopTools_IndexedDataMapOfShapeShape myModifShapes;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif