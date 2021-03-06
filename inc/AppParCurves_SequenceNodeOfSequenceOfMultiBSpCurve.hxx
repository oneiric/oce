// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve_HeaderFile
#define _AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve.hxx>

#include <AppParCurves_MultiBSpCurve.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class AppParCurves_MultiBSpCurve;
class AppParCurves_SequenceOfMultiBSpCurve;



class AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve : public TCollection_SeqNode
{

public:

  
    AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(const AppParCurves_MultiBSpCurve& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      AppParCurves_MultiBSpCurve& Value()  const;




  DEFINE_STANDARD_RTTI(AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve)

protected:




private: 


  AppParCurves_MultiBSpCurve myValue;


};

#define SeqItem AppParCurves_MultiBSpCurve
#define SeqItem_hxx <AppParCurves_MultiBSpCurve.hxx>
#define TCollection_SequenceNode AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve
#define TCollection_SequenceNode_hxx <AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve
#define TCollection_SequenceNode_Type_() AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve_Type_()
#define TCollection_Sequence AppParCurves_SequenceOfMultiBSpCurve
#define TCollection_Sequence_hxx <AppParCurves_SequenceOfMultiBSpCurve.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve_HeaderFile
