/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"



void Skeleton::visitExp(Exp* t) {} //abstract class

void Skeleton::visitEIff(EIff *eiff)
{
  /* Code For EIff Goes Here */

  eiff->exp_1->accept(this);
  eiff->exp_2->accept(this);

}

void Skeleton::visitEImplies(EImplies *eimplies)
{
  /* Code For EImplies Goes Here */

  eimplies->exp_1->accept(this);
  eimplies->exp_2->accept(this);

}

void Skeleton::visitEOr(EOr *eor)
{
  /* Code For EOr Goes Here */

  eor->exp_1->accept(this);
  eor->exp_2->accept(this);

}

void Skeleton::visitEAnd(EAnd *eand)
{
  /* Code For EAnd Goes Here */

  eand->exp_1->accept(this);
  eand->exp_2->accept(this);

}

void Skeleton::visitENot(ENot *enot)
{
  /* Code For ENot Goes Here */

  enot->exp_->accept(this);

}

void Skeleton::visitEVar(EVar *evar)
{
  /* Code For EVar Goes Here */

  visitUIdent(evar->uident_);

}

void Skeleton::visitETrue(ETrue *etrue)
{
  /* Code For ETrue Goes Here */


}

void Skeleton::visitEFalse(EFalse *efalse)
{
  /* Code For EFalse Goes Here */


}



void Skeleton::visitUIdent(UIdent x)
{
  /* Code for UIdent Goes Here */
}

void Skeleton::visitInteger(Integer x)
{
  /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x)
{
  /* Code for Char Goes Here */
}

void Skeleton::visitDouble(Double x)
{
  /* Code for Double Goes Here */
}

void Skeleton::visitString(String x)
{
  /* Code for String Goes Here */
}

void Skeleton::visitIdent(Ident x)
{
  /* Code for Ident Goes Here */
}



