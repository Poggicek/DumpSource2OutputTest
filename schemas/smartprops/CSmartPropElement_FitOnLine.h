class CSmartPropElement_FitOnLine : public CSmartPropElement_Group
{
	CSmartPropAttributeVector m_vStart;
	CSmartPropAttributeVector m_vEnd;
	CSmartPropAttributeCoordinateSpace m_PointSpace;
	CSmartPropAttributeBool m_bOrientAlongLine;
	CSmartPropAttributeVector m_vUpDirection;
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace;
	CSmartPropAttributeBool m_bPrioritizeUp;
	CSmartPropAttributeScaleMode m_nScaleMode;
	CSmartPropAttributePickMode m_nPickMode;
};
