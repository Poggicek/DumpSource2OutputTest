class CSmartPropOperation_TraceToPoint : public CSmartPropOperation_Trace
{
	CSmartPropAttributeVector m_TargetPoint;
	CSmartPropAttributeCoordinateSpace m_TargetPointSpace;
	CSmartPropAttributeBool m_bTraceAway;
	CSmartPropAttributeFloat m_flTraceLength;
};
