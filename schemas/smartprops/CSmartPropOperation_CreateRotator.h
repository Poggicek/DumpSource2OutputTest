class CSmartPropOperation_CreateRotator : public CSmartPropTransformOperation
{
	CUtlString m_Name;
	CSmartPropAttributeVector m_vRotationAxis;
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace;
	CSmartPropAttributeFloat m_flDisplayRadius;
	CSmartPropAttributeBool m_bApplyToCurrentTransform;
	CSmartPropAttributeFloat m_flSnappingIncrement;
	CSmartPropAttributeBool m_bEnforceLimits;
	CSmartPropAttributeFloat m_flMinAngle;
	CSmartPropAttributeFloat m_flMaxAngle;
	CUtlString m_OutputVariable;
};
