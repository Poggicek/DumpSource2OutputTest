class CSmartPropElement_BendDeformer : public CSmartPropElement_Deformer
{
	CSmartPropAttributeBool m_bDeformationEnabled;
	CSmartPropAttributeVector m_vOrigin;
	CSmartPropAttributeAngles m_vAngles;
	CSmartPropAttributeVector m_vSize;
	CSmartPropAttributeFloat m_flBendAngle;
	CSmartPropAttributeFloat m_flBendPoint;
	CSmartPropAttributeFloat m_flBendRadius;
};
