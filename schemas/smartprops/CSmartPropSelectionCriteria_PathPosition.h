class CSmartPropSelectionCriteria_PathPosition : public CSmartPropSelectionCriteria
{
	CSmartPropAttributePathPositions m_PlaceAtPositions;
	CSmartPropAttributeInt m_nPlaceEveryNthPosition;
	CSmartPropAttributeInt m_nNthPositionIndexOffset;
	CSmartPropAttributeBool m_bAllowAtStart;
	CSmartPropAttributeBool m_bAllowAtEnd;
};
