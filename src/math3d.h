// math3d.h

#ifndef _MATH3D_H_
#define	_MATH3D_H_


#define STRICT
#define D3D_OVERLOADS
#include <math.h>


#define PI				3.14159265358979323846f
#define CHOUIA			1e-6f
#define BEAUCOUP		1e6f



extern BOOL			IsEqual(float a, float b);

extern float		Min(float a, float b);
extern float		Min(float a, float b, float c);
extern float		Min(float a, float b, float c, float d);
extern float		Min(float a, float b, float c, float d, float e);

extern float		Max(float a, float b);
extern float		Max(float a, float b, float c);
extern float		Max(float a, float b, float c, float d);
extern float		Max(float a, float b, float c, float d, float e);

extern float		Norm(float a);
extern float		NormSign(float a);
extern float		Abs(float a);
	
extern void			Swap(int &a, int &b);
extern void			Swap(float &a, float &b);
extern void			Swap(FPOINT &a, FPOINT &b);

extern float		Mod(float a, float m);
extern float		Grid(float value, float step);
extern D3DVECTOR	Grid(D3DVECTOR pos, float step);
extern float		NormAngle(float angle);
extern BOOL			TestAngle(float angle, float min, float max);

extern float		Direction(float a, float g);
extern FPOINT		RotatePoint(FPOINT center, float angle, FPOINT p);
extern FPOINT		RotatePoint(float angle, FPOINT p);
extern FPOINT		RotatePoint(float angle, float dist);
extern float		RotateAngle(float x, float y);
extern float		RotateAngle(FPOINT center, FPOINT p1, FPOINT p2);
extern float		MidPoint(FPOINT a, FPOINT b, float px);
extern D3DVECTOR	LineProgress(const D3DVECTOR &start, const D3DVECTOR &goal, float progress);
extern BOOL			IsInsideTriangle(FPOINT a, FPOINT b, FPOINT c, FPOINT p);
extern BOOL			Deforme(FPOINT *t1, FPOINT *t2, FPOINT &p);
extern BOOL			Intersect(const FPOINT &a, const FPOINT &b, const FPOINT &c, const FPOINT &d, FPOINT &p);
extern BOOL			IntersectSegment(const FPOINT &a, const FPOINT &b, const FPOINT &c, const FPOINT &d, FPOINT &p);
extern BOOL			Intersect(D3DVECTOR a, D3DVECTOR b, D3DVECTOR c, D3DVECTOR d, D3DVECTOR e, D3DVECTOR &i);
extern BOOL			IntersectY(D3DVECTOR a, D3DVECTOR b, D3DVECTOR c, D3DVECTOR &p);
extern D3DVECTOR	SegmentDist(const D3DVECTOR &p1, const D3DVECTOR &p2, float dist);
extern BOOL			IsInside(FPOINT p1, FPOINT p2, FPOINT p);
extern void			RotatePoint(float cx, float cy, float angle, float &px, float &py);
extern void			RotatePoint(D3DVECTOR center, float angleH, float angleV, D3DVECTOR &p);
extern void			RotatePoint2(D3DVECTOR center, float angleH, float angleV, D3DVECTOR &p);
extern D3DVECTOR	RotateView(D3DVECTOR center, float angleH, float angleV, float dist);
extern D3DVECTOR	LookatPoint( D3DVECTOR eye, float angleH, float angleV, float length );
extern float		Length(FPOINT a, FPOINT b);
extern float		Length(float x, float y);
extern float		Length(const D3DVECTOR &u);
extern float		Length(const D3DVECTOR &a, const D3DVECTOR &b);
extern float		Length2d(const D3DVECTOR &a, const D3DVECTOR &b);
extern float		Angle( D3DVECTOR u, D3DVECTOR v );
extern D3DVECTOR	Cross( D3DVECTOR u, D3DVECTOR v );
extern D3DVECTOR	ComputeNormal( D3DVECTOR p1, D3DVECTOR p2, D3DVECTOR p3 );
extern D3DVECTOR	Transform(const D3DMATRIX &m, D3DVECTOR p);
extern FPOINT		Projection(const FPOINT &a, const FPOINT &b, const FPOINT &p);
extern D3DVECTOR	Projection(const D3DVECTOR &a, const D3DVECTOR &b, const D3DVECTOR &p);

extern void			MappingObject( D3DVERTEX2* pVertices, int nb, float scale );
extern void			SmoothObject( D3DVERTEX2* pVertices, int nb );
extern BOOL			LineFunction(FPOINT p1, FPOINT p2, float &a, float &b);
extern float		DistancePlanPoint(const D3DVECTOR &a, const D3DVECTOR &b, const D3DVECTOR &c, const D3DVECTOR &p);
extern BOOL			IsSamePlane(D3DVECTOR *plan1, D3DVECTOR *plan2);
extern void			MatRotateXZY(D3DMATRIX &mat, D3DVECTOR angle);
extern void			MatRotateZXY(D3DMATRIX &mat, D3DVECTOR angle);

extern float		Rand();
extern float		Rand(float init);
extern void			PseudoRandom(D3DVERTEX2 &p, float rv, float rh);
extern float		Neutral(float value, float dead);

extern float		Prop(int a, int b, float p);
extern float		Linear(float actual, float hope, float time);
extern float		Smooth(float actual, float hope, float time);
extern float		SmoothA(float actual, float hope, float time);
extern float		SmoothP(float actual, float hope, float time);
extern float		Soft(float progress, int iter=1);
extern float		Bounce(float progress, float middle=0.3f, float bounce=0.4f);

extern D3DCOLOR		RetColor(int r, int g, int b);
extern void			RetColor(D3DCOLOR intensity, int &r, int &g, int &b);
extern D3DCOLOR		RetColor(float intensity);
extern D3DCOLOR		RetColor(D3DCOLORVALUE intensity);
extern D3DCOLORVALUE RetColor(D3DCOLOR intensity);

extern void			RGB2HSV(D3DCOLORVALUE src, ColorHSV &dest);
extern void			HSV2RGB(ColorHSV src, D3DCOLORVALUE &dest);

#endif //_MATH3D_H_
