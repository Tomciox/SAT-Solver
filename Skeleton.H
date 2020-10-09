#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"


class Skeleton : public Visitor
{
public:
  void visitExp(Exp* p);
  void visitEIff(EIff* p);
  void visitEImplies(EImplies* p);
  void visitEOr(EOr* p);
  void visitEAnd(EAnd* p);
  void visitENot(ENot* p);
  void visitEVar(EVar* p);
  void visitETrue(ETrue* p);
  void visitEFalse(EFalse* p);

  void visit"UIdent"("UIdent" x);
  void visit"Integer"("Integer" x);
  void visit"Char"("Char" x);
  void visit"Double"("Double" x);
  void visit"String"("String" x);
  void visit"Ident"("Ident" x);

};


#endif
