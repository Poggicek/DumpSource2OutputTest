class CSmartPropElement_PlaceOnPath : public CSmartPropElement_Group
{
	CUtlString m_PathName;
	CSmartPropAttributeFloat m_flSpacing;
	CSmartPropAttributeFloat m_flOffsetAlongPath;
	CSmartPropAttributeVector2D m_vPathOffset;
	CSmartPropAttributeCoordinateSpace m_PathSpace;
	CSmartPropAttributeBool m_bUseFixedUpDirection;
	CSmartPropAttributeBool m_bUseProjectedDistance;
	CSmartPropAttributeVector m_vUpDirection;
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace;
	CUtlVector< Vector > m_DefaultPath;
};
