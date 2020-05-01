
// Generated from Jenny.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "JennyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by JennyParser.
 */
class  JennyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationunit(JennyParser::TranslationunitContext *ctx) = 0;
  virtual void exitTranslationunit(JennyParser::TranslationunitContext *ctx) = 0;

  virtual void enterPrimaryexpression(JennyParser::PrimaryexpressionContext *ctx) = 0;
  virtual void exitPrimaryexpression(JennyParser::PrimaryexpressionContext *ctx) = 0;

  virtual void enterIdexpression(JennyParser::IdexpressionContext *ctx) = 0;
  virtual void exitIdexpression(JennyParser::IdexpressionContext *ctx) = 0;

  virtual void enterUnqualifiedid(JennyParser::UnqualifiedidContext *ctx) = 0;
  virtual void exitUnqualifiedid(JennyParser::UnqualifiedidContext *ctx) = 0;

  virtual void enterQualifiedid(JennyParser::QualifiedidContext *ctx) = 0;
  virtual void exitQualifiedid(JennyParser::QualifiedidContext *ctx) = 0;

  virtual void enterNestednamespecifier(JennyParser::NestednamespecifierContext *ctx) = 0;
  virtual void exitNestednamespecifier(JennyParser::NestednamespecifierContext *ctx) = 0;

  virtual void enterLambdaexpression(JennyParser::LambdaexpressionContext *ctx) = 0;
  virtual void exitLambdaexpression(JennyParser::LambdaexpressionContext *ctx) = 0;

  virtual void enterLambdaintroducer(JennyParser::LambdaintroducerContext *ctx) = 0;
  virtual void exitLambdaintroducer(JennyParser::LambdaintroducerContext *ctx) = 0;

  virtual void enterLambdacapture(JennyParser::LambdacaptureContext *ctx) = 0;
  virtual void exitLambdacapture(JennyParser::LambdacaptureContext *ctx) = 0;

  virtual void enterCapturedefault(JennyParser::CapturedefaultContext *ctx) = 0;
  virtual void exitCapturedefault(JennyParser::CapturedefaultContext *ctx) = 0;

  virtual void enterCapturelist(JennyParser::CapturelistContext *ctx) = 0;
  virtual void exitCapturelist(JennyParser::CapturelistContext *ctx) = 0;

  virtual void enterCapture(JennyParser::CaptureContext *ctx) = 0;
  virtual void exitCapture(JennyParser::CaptureContext *ctx) = 0;

  virtual void enterSimplecapture(JennyParser::SimplecaptureContext *ctx) = 0;
  virtual void exitSimplecapture(JennyParser::SimplecaptureContext *ctx) = 0;

  virtual void enterInitcapture(JennyParser::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(JennyParser::InitcaptureContext *ctx) = 0;

  virtual void enterLambdadeclarator(JennyParser::LambdadeclaratorContext *ctx) = 0;
  virtual void exitLambdadeclarator(JennyParser::LambdadeclaratorContext *ctx) = 0;

  virtual void enterPostfixexpression(JennyParser::PostfixexpressionContext *ctx) = 0;
  virtual void exitPostfixexpression(JennyParser::PostfixexpressionContext *ctx) = 0;

  virtual void enterTypeidofexpr(JennyParser::TypeidofexprContext *ctx) = 0;
  virtual void exitTypeidofexpr(JennyParser::TypeidofexprContext *ctx) = 0;

  virtual void enterTypeidofthetypeid(JennyParser::TypeidofthetypeidContext *ctx) = 0;
  virtual void exitTypeidofthetypeid(JennyParser::TypeidofthetypeidContext *ctx) = 0;

  virtual void enterExpressionlist(JennyParser::ExpressionlistContext *ctx) = 0;
  virtual void exitExpressionlist(JennyParser::ExpressionlistContext *ctx) = 0;

  virtual void enterPseudodestructorname(JennyParser::PseudodestructornameContext *ctx) = 0;
  virtual void exitPseudodestructorname(JennyParser::PseudodestructornameContext *ctx) = 0;

  virtual void enterUnaryexpression(JennyParser::UnaryexpressionContext *ctx) = 0;
  virtual void exitUnaryexpression(JennyParser::UnaryexpressionContext *ctx) = 0;

  virtual void enterUnaryoperator(JennyParser::UnaryoperatorContext *ctx) = 0;
  virtual void exitUnaryoperator(JennyParser::UnaryoperatorContext *ctx) = 0;

  virtual void enterNewexpression(JennyParser::NewexpressionContext *ctx) = 0;
  virtual void exitNewexpression(JennyParser::NewexpressionContext *ctx) = 0;

  virtual void enterNewplacement(JennyParser::NewplacementContext *ctx) = 0;
  virtual void exitNewplacement(JennyParser::NewplacementContext *ctx) = 0;

  virtual void enterNewtypeid(JennyParser::NewtypeidContext *ctx) = 0;
  virtual void exitNewtypeid(JennyParser::NewtypeidContext *ctx) = 0;

  virtual void enterNewdeclarator(JennyParser::NewdeclaratorContext *ctx) = 0;
  virtual void exitNewdeclarator(JennyParser::NewdeclaratorContext *ctx) = 0;

  virtual void enterNoptrnewdeclarator(JennyParser::NoptrnewdeclaratorContext *ctx) = 0;
  virtual void exitNoptrnewdeclarator(JennyParser::NoptrnewdeclaratorContext *ctx) = 0;

  virtual void enterNewinitializer(JennyParser::NewinitializerContext *ctx) = 0;
  virtual void exitNewinitializer(JennyParser::NewinitializerContext *ctx) = 0;

  virtual void enterDeleteexpression(JennyParser::DeleteexpressionContext *ctx) = 0;
  virtual void exitDeleteexpression(JennyParser::DeleteexpressionContext *ctx) = 0;

  virtual void enterNoexceptexpression(JennyParser::NoexceptexpressionContext *ctx) = 0;
  virtual void exitNoexceptexpression(JennyParser::NoexceptexpressionContext *ctx) = 0;

  virtual void enterCastexpression(JennyParser::CastexpressionContext *ctx) = 0;
  virtual void exitCastexpression(JennyParser::CastexpressionContext *ctx) = 0;

  virtual void enterPmexpression(JennyParser::PmexpressionContext *ctx) = 0;
  virtual void exitPmexpression(JennyParser::PmexpressionContext *ctx) = 0;

  virtual void enterMultiplicativeexpression(JennyParser::MultiplicativeexpressionContext *ctx) = 0;
  virtual void exitMultiplicativeexpression(JennyParser::MultiplicativeexpressionContext *ctx) = 0;

  virtual void enterAdditiveexpression(JennyParser::AdditiveexpressionContext *ctx) = 0;
  virtual void exitAdditiveexpression(JennyParser::AdditiveexpressionContext *ctx) = 0;

  virtual void enterShiftexpression(JennyParser::ShiftexpressionContext *ctx) = 0;
  virtual void exitShiftexpression(JennyParser::ShiftexpressionContext *ctx) = 0;

  virtual void enterShiftoperator(JennyParser::ShiftoperatorContext *ctx) = 0;
  virtual void exitShiftoperator(JennyParser::ShiftoperatorContext *ctx) = 0;

  virtual void enterRelationalexpression(JennyParser::RelationalexpressionContext *ctx) = 0;
  virtual void exitRelationalexpression(JennyParser::RelationalexpressionContext *ctx) = 0;

  virtual void enterEqualityexpression(JennyParser::EqualityexpressionContext *ctx) = 0;
  virtual void exitEqualityexpression(JennyParser::EqualityexpressionContext *ctx) = 0;

  virtual void enterAndexpression(JennyParser::AndexpressionContext *ctx) = 0;
  virtual void exitAndexpression(JennyParser::AndexpressionContext *ctx) = 0;

  virtual void enterExclusiveorexpression(JennyParser::ExclusiveorexpressionContext *ctx) = 0;
  virtual void exitExclusiveorexpression(JennyParser::ExclusiveorexpressionContext *ctx) = 0;

  virtual void enterInclusiveorexpression(JennyParser::InclusiveorexpressionContext *ctx) = 0;
  virtual void exitInclusiveorexpression(JennyParser::InclusiveorexpressionContext *ctx) = 0;

  virtual void enterLogicalandexpression(JennyParser::LogicalandexpressionContext *ctx) = 0;
  virtual void exitLogicalandexpression(JennyParser::LogicalandexpressionContext *ctx) = 0;

  virtual void enterLogicalorexpression(JennyParser::LogicalorexpressionContext *ctx) = 0;
  virtual void exitLogicalorexpression(JennyParser::LogicalorexpressionContext *ctx) = 0;

  virtual void enterConditionalexpression(JennyParser::ConditionalexpressionContext *ctx) = 0;
  virtual void exitConditionalexpression(JennyParser::ConditionalexpressionContext *ctx) = 0;

  virtual void enterAssignmentexpression(JennyParser::AssignmentexpressionContext *ctx) = 0;
  virtual void exitAssignmentexpression(JennyParser::AssignmentexpressionContext *ctx) = 0;

  virtual void enterAssignmentoperator(JennyParser::AssignmentoperatorContext *ctx) = 0;
  virtual void exitAssignmentoperator(JennyParser::AssignmentoperatorContext *ctx) = 0;

  virtual void enterExpression(JennyParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(JennyParser::ExpressionContext *ctx) = 0;

  virtual void enterConstantexpression(JennyParser::ConstantexpressionContext *ctx) = 0;
  virtual void exitConstantexpression(JennyParser::ConstantexpressionContext *ctx) = 0;

  virtual void enterStatement(JennyParser::StatementContext *ctx) = 0;
  virtual void exitStatement(JennyParser::StatementContext *ctx) = 0;

  virtual void enterLabeledstatement(JennyParser::LabeledstatementContext *ctx) = 0;
  virtual void exitLabeledstatement(JennyParser::LabeledstatementContext *ctx) = 0;

  virtual void enterExpressionstatement(JennyParser::ExpressionstatementContext *ctx) = 0;
  virtual void exitExpressionstatement(JennyParser::ExpressionstatementContext *ctx) = 0;

  virtual void enterCompoundstatement(JennyParser::CompoundstatementContext *ctx) = 0;
  virtual void exitCompoundstatement(JennyParser::CompoundstatementContext *ctx) = 0;

  virtual void enterStatementseq(JennyParser::StatementseqContext *ctx) = 0;
  virtual void exitStatementseq(JennyParser::StatementseqContext *ctx) = 0;

  virtual void enterSelectionstatement(JennyParser::SelectionstatementContext *ctx) = 0;
  virtual void exitSelectionstatement(JennyParser::SelectionstatementContext *ctx) = 0;

  virtual void enterCondition(JennyParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(JennyParser::ConditionContext *ctx) = 0;

  virtual void enterIterationstatement(JennyParser::IterationstatementContext *ctx) = 0;
  virtual void exitIterationstatement(JennyParser::IterationstatementContext *ctx) = 0;

  virtual void enterForinitstatement(JennyParser::ForinitstatementContext *ctx) = 0;
  virtual void exitForinitstatement(JennyParser::ForinitstatementContext *ctx) = 0;

  virtual void enterForrangedeclaration(JennyParser::ForrangedeclarationContext *ctx) = 0;
  virtual void exitForrangedeclaration(JennyParser::ForrangedeclarationContext *ctx) = 0;

  virtual void enterForrangeinitializer(JennyParser::ForrangeinitializerContext *ctx) = 0;
  virtual void exitForrangeinitializer(JennyParser::ForrangeinitializerContext *ctx) = 0;

  virtual void enterJumpstatement(JennyParser::JumpstatementContext *ctx) = 0;
  virtual void exitJumpstatement(JennyParser::JumpstatementContext *ctx) = 0;

  virtual void enterDeclarationstatement(JennyParser::DeclarationstatementContext *ctx) = 0;
  virtual void exitDeclarationstatement(JennyParser::DeclarationstatementContext *ctx) = 0;

  virtual void enterDeclarationseq(JennyParser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(JennyParser::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(JennyParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(JennyParser::DeclarationContext *ctx) = 0;

  virtual void enterBlockdeclaration(JennyParser::BlockdeclarationContext *ctx) = 0;
  virtual void exitBlockdeclaration(JennyParser::BlockdeclarationContext *ctx) = 0;

  virtual void enterAliasdeclaration(JennyParser::AliasdeclarationContext *ctx) = 0;
  virtual void exitAliasdeclaration(JennyParser::AliasdeclarationContext *ctx) = 0;

  virtual void enterSimpledeclaration(JennyParser::SimpledeclarationContext *ctx) = 0;
  virtual void exitSimpledeclaration(JennyParser::SimpledeclarationContext *ctx) = 0;

  virtual void enterStatic_assertdeclaration(JennyParser::Static_assertdeclarationContext *ctx) = 0;
  virtual void exitStatic_assertdeclaration(JennyParser::Static_assertdeclarationContext *ctx) = 0;

  virtual void enterEmptydeclaration(JennyParser::EmptydeclarationContext *ctx) = 0;
  virtual void exitEmptydeclaration(JennyParser::EmptydeclarationContext *ctx) = 0;

  virtual void enterAttributedeclaration(JennyParser::AttributedeclarationContext *ctx) = 0;
  virtual void exitAttributedeclaration(JennyParser::AttributedeclarationContext *ctx) = 0;

  virtual void enterDeclspecifier(JennyParser::DeclspecifierContext *ctx) = 0;
  virtual void exitDeclspecifier(JennyParser::DeclspecifierContext *ctx) = 0;

  virtual void enterDeclspecifierseq(JennyParser::DeclspecifierseqContext *ctx) = 0;
  virtual void exitDeclspecifierseq(JennyParser::DeclspecifierseqContext *ctx) = 0;

  virtual void enterStorageclassspecifier(JennyParser::StorageclassspecifierContext *ctx) = 0;
  virtual void exitStorageclassspecifier(JennyParser::StorageclassspecifierContext *ctx) = 0;

  virtual void enterFunctionspecifier(JennyParser::FunctionspecifierContext *ctx) = 0;
  virtual void exitFunctionspecifier(JennyParser::FunctionspecifierContext *ctx) = 0;

  virtual void enterTypedefname(JennyParser::TypedefnameContext *ctx) = 0;
  virtual void exitTypedefname(JennyParser::TypedefnameContext *ctx) = 0;

  virtual void enterTypespecifier(JennyParser::TypespecifierContext *ctx) = 0;
  virtual void exitTypespecifier(JennyParser::TypespecifierContext *ctx) = 0;

  virtual void enterTrailingtypespecifier(JennyParser::TrailingtypespecifierContext *ctx) = 0;
  virtual void exitTrailingtypespecifier(JennyParser::TrailingtypespecifierContext *ctx) = 0;

  virtual void enterTypespecifierseq(JennyParser::TypespecifierseqContext *ctx) = 0;
  virtual void exitTypespecifierseq(JennyParser::TypespecifierseqContext *ctx) = 0;

  virtual void enterTrailingtypespecifierseq(JennyParser::TrailingtypespecifierseqContext *ctx) = 0;
  virtual void exitTrailingtypespecifierseq(JennyParser::TrailingtypespecifierseqContext *ctx) = 0;

  virtual void enterSimpletypespecifier(JennyParser::SimpletypespecifierContext *ctx) = 0;
  virtual void exitSimpletypespecifier(JennyParser::SimpletypespecifierContext *ctx) = 0;

  virtual void enterThetypename(JennyParser::ThetypenameContext *ctx) = 0;
  virtual void exitThetypename(JennyParser::ThetypenameContext *ctx) = 0;

  virtual void enterDecltypespecifier(JennyParser::DecltypespecifierContext *ctx) = 0;
  virtual void exitDecltypespecifier(JennyParser::DecltypespecifierContext *ctx) = 0;

  virtual void enterElaboratedtypespecifier(JennyParser::ElaboratedtypespecifierContext *ctx) = 0;
  virtual void exitElaboratedtypespecifier(JennyParser::ElaboratedtypespecifierContext *ctx) = 0;

  virtual void enterEnumname(JennyParser::EnumnameContext *ctx) = 0;
  virtual void exitEnumname(JennyParser::EnumnameContext *ctx) = 0;

  virtual void enterEnumspecifier(JennyParser::EnumspecifierContext *ctx) = 0;
  virtual void exitEnumspecifier(JennyParser::EnumspecifierContext *ctx) = 0;

  virtual void enterEnumhead(JennyParser::EnumheadContext *ctx) = 0;
  virtual void exitEnumhead(JennyParser::EnumheadContext *ctx) = 0;

  virtual void enterOpaqueenumdeclaration(JennyParser::OpaqueenumdeclarationContext *ctx) = 0;
  virtual void exitOpaqueenumdeclaration(JennyParser::OpaqueenumdeclarationContext *ctx) = 0;

  virtual void enterEnumkey(JennyParser::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(JennyParser::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(JennyParser::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(JennyParser::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorlist(JennyParser::EnumeratorlistContext *ctx) = 0;
  virtual void exitEnumeratorlist(JennyParser::EnumeratorlistContext *ctx) = 0;

  virtual void enterEnumeratordefinition(JennyParser::EnumeratordefinitionContext *ctx) = 0;
  virtual void exitEnumeratordefinition(JennyParser::EnumeratordefinitionContext *ctx) = 0;

  virtual void enterEnumerator(JennyParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(JennyParser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespacename(JennyParser::NamespacenameContext *ctx) = 0;
  virtual void exitNamespacename(JennyParser::NamespacenameContext *ctx) = 0;

  virtual void enterOriginalnamespacename(JennyParser::OriginalnamespacenameContext *ctx) = 0;
  virtual void exitOriginalnamespacename(JennyParser::OriginalnamespacenameContext *ctx) = 0;

  virtual void enterNamespacedefinition(JennyParser::NamespacedefinitionContext *ctx) = 0;
  virtual void exitNamespacedefinition(JennyParser::NamespacedefinitionContext *ctx) = 0;

  virtual void enterNamednamespacedefinition(JennyParser::NamednamespacedefinitionContext *ctx) = 0;
  virtual void exitNamednamespacedefinition(JennyParser::NamednamespacedefinitionContext *ctx) = 0;

  virtual void enterOriginalnamespacedefinition(JennyParser::OriginalnamespacedefinitionContext *ctx) = 0;
  virtual void exitOriginalnamespacedefinition(JennyParser::OriginalnamespacedefinitionContext *ctx) = 0;

  virtual void enterExtensionnamespacedefinition(JennyParser::ExtensionnamespacedefinitionContext *ctx) = 0;
  virtual void exitExtensionnamespacedefinition(JennyParser::ExtensionnamespacedefinitionContext *ctx) = 0;

  virtual void enterUnnamednamespacedefinition(JennyParser::UnnamednamespacedefinitionContext *ctx) = 0;
  virtual void exitUnnamednamespacedefinition(JennyParser::UnnamednamespacedefinitionContext *ctx) = 0;

  virtual void enterNamespacebody(JennyParser::NamespacebodyContext *ctx) = 0;
  virtual void exitNamespacebody(JennyParser::NamespacebodyContext *ctx) = 0;

  virtual void enterNamespacealias(JennyParser::NamespacealiasContext *ctx) = 0;
  virtual void exitNamespacealias(JennyParser::NamespacealiasContext *ctx) = 0;

  virtual void enterNamespacealiasdefinition(JennyParser::NamespacealiasdefinitionContext *ctx) = 0;
  virtual void exitNamespacealiasdefinition(JennyParser::NamespacealiasdefinitionContext *ctx) = 0;

  virtual void enterQualifiednamespacespecifier(JennyParser::QualifiednamespacespecifierContext *ctx) = 0;
  virtual void exitQualifiednamespacespecifier(JennyParser::QualifiednamespacespecifierContext *ctx) = 0;

  virtual void enterUsingdeclaration(JennyParser::UsingdeclarationContext *ctx) = 0;
  virtual void exitUsingdeclaration(JennyParser::UsingdeclarationContext *ctx) = 0;

  virtual void enterUsingdirective(JennyParser::UsingdirectiveContext *ctx) = 0;
  virtual void exitUsingdirective(JennyParser::UsingdirectiveContext *ctx) = 0;

  virtual void enterAsmdefinition(JennyParser::AsmdefinitionContext *ctx) = 0;
  virtual void exitAsmdefinition(JennyParser::AsmdefinitionContext *ctx) = 0;

  virtual void enterLinkagespecification(JennyParser::LinkagespecificationContext *ctx) = 0;
  virtual void exitLinkagespecification(JennyParser::LinkagespecificationContext *ctx) = 0;

  virtual void enterAttributespecifierseq(JennyParser::AttributespecifierseqContext *ctx) = 0;
  virtual void exitAttributespecifierseq(JennyParser::AttributespecifierseqContext *ctx) = 0;

  virtual void enterAttributespecifier(JennyParser::AttributespecifierContext *ctx) = 0;
  virtual void exitAttributespecifier(JennyParser::AttributespecifierContext *ctx) = 0;

  virtual void enterAlignmentspecifier(JennyParser::AlignmentspecifierContext *ctx) = 0;
  virtual void exitAlignmentspecifier(JennyParser::AlignmentspecifierContext *ctx) = 0;

  virtual void enterAttributelist(JennyParser::AttributelistContext *ctx) = 0;
  virtual void exitAttributelist(JennyParser::AttributelistContext *ctx) = 0;

  virtual void enterAttribute(JennyParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(JennyParser::AttributeContext *ctx) = 0;

  virtual void enterAttributetoken(JennyParser::AttributetokenContext *ctx) = 0;
  virtual void exitAttributetoken(JennyParser::AttributetokenContext *ctx) = 0;

  virtual void enterAttributescopedtoken(JennyParser::AttributescopedtokenContext *ctx) = 0;
  virtual void exitAttributescopedtoken(JennyParser::AttributescopedtokenContext *ctx) = 0;

  virtual void enterAttributenamespace(JennyParser::AttributenamespaceContext *ctx) = 0;
  virtual void exitAttributenamespace(JennyParser::AttributenamespaceContext *ctx) = 0;

  virtual void enterAttributeargumentclause(JennyParser::AttributeargumentclauseContext *ctx) = 0;
  virtual void exitAttributeargumentclause(JennyParser::AttributeargumentclauseContext *ctx) = 0;

  virtual void enterBalancedtokenseq(JennyParser::BalancedtokenseqContext *ctx) = 0;
  virtual void exitBalancedtokenseq(JennyParser::BalancedtokenseqContext *ctx) = 0;

  virtual void enterBalancedtoken(JennyParser::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(JennyParser::BalancedtokenContext *ctx) = 0;

  virtual void enterInitdeclaratorlist(JennyParser::InitdeclaratorlistContext *ctx) = 0;
  virtual void exitInitdeclaratorlist(JennyParser::InitdeclaratorlistContext *ctx) = 0;

  virtual void enterInitdeclarator(JennyParser::InitdeclaratorContext *ctx) = 0;
  virtual void exitInitdeclarator(JennyParser::InitdeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(JennyParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(JennyParser::DeclaratorContext *ctx) = 0;

  virtual void enterPtrdeclarator(JennyParser::PtrdeclaratorContext *ctx) = 0;
  virtual void exitPtrdeclarator(JennyParser::PtrdeclaratorContext *ctx) = 0;

  virtual void enterNoptrdeclarator(JennyParser::NoptrdeclaratorContext *ctx) = 0;
  virtual void exitNoptrdeclarator(JennyParser::NoptrdeclaratorContext *ctx) = 0;

  virtual void enterParametersandqualifiers(JennyParser::ParametersandqualifiersContext *ctx) = 0;
  virtual void exitParametersandqualifiers(JennyParser::ParametersandqualifiersContext *ctx) = 0;

  virtual void enterTrailingreturntype(JennyParser::TrailingreturntypeContext *ctx) = 0;
  virtual void exitTrailingreturntype(JennyParser::TrailingreturntypeContext *ctx) = 0;

  virtual void enterPtroperator(JennyParser::PtroperatorContext *ctx) = 0;
  virtual void exitPtroperator(JennyParser::PtroperatorContext *ctx) = 0;

  virtual void enterCvqualifierseq(JennyParser::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(JennyParser::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvqualifier(JennyParser::CvqualifierContext *ctx) = 0;
  virtual void exitCvqualifier(JennyParser::CvqualifierContext *ctx) = 0;

  virtual void enterRefqualifier(JennyParser::RefqualifierContext *ctx) = 0;
  virtual void exitRefqualifier(JennyParser::RefqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(JennyParser::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(JennyParser::DeclaratoridContext *ctx) = 0;

  virtual void enterThetypeid(JennyParser::ThetypeidContext *ctx) = 0;
  virtual void exitThetypeid(JennyParser::ThetypeidContext *ctx) = 0;

  virtual void enterAbstractdeclarator(JennyParser::AbstractdeclaratorContext *ctx) = 0;
  virtual void exitAbstractdeclarator(JennyParser::AbstractdeclaratorContext *ctx) = 0;

  virtual void enterPtrabstractdeclarator(JennyParser::PtrabstractdeclaratorContext *ctx) = 0;
  virtual void exitPtrabstractdeclarator(JennyParser::PtrabstractdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractdeclarator(JennyParser::NoptrabstractdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractdeclarator(JennyParser::NoptrabstractdeclaratorContext *ctx) = 0;

  virtual void enterAbstractpackdeclarator(JennyParser::AbstractpackdeclaratorContext *ctx) = 0;
  virtual void exitAbstractpackdeclarator(JennyParser::AbstractpackdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractpackdeclarator(JennyParser::NoptrabstractpackdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractpackdeclarator(JennyParser::NoptrabstractpackdeclaratorContext *ctx) = 0;

  virtual void enterParameterdeclarationclause(JennyParser::ParameterdeclarationclauseContext *ctx) = 0;
  virtual void exitParameterdeclarationclause(JennyParser::ParameterdeclarationclauseContext *ctx) = 0;

  virtual void enterParameterdeclarationlist(JennyParser::ParameterdeclarationlistContext *ctx) = 0;
  virtual void exitParameterdeclarationlist(JennyParser::ParameterdeclarationlistContext *ctx) = 0;

  virtual void enterParameterdeclaration(JennyParser::ParameterdeclarationContext *ctx) = 0;
  virtual void exitParameterdeclaration(JennyParser::ParameterdeclarationContext *ctx) = 0;

  virtual void enterFunctiondefinition(JennyParser::FunctiondefinitionContext *ctx) = 0;
  virtual void exitFunctiondefinition(JennyParser::FunctiondefinitionContext *ctx) = 0;

  virtual void enterFunctionbody(JennyParser::FunctionbodyContext *ctx) = 0;
  virtual void exitFunctionbody(JennyParser::FunctionbodyContext *ctx) = 0;

  virtual void enterInitializer(JennyParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(JennyParser::InitializerContext *ctx) = 0;

  virtual void enterBraceorequalinitializer(JennyParser::BraceorequalinitializerContext *ctx) = 0;
  virtual void exitBraceorequalinitializer(JennyParser::BraceorequalinitializerContext *ctx) = 0;

  virtual void enterInitializerclause(JennyParser::InitializerclauseContext *ctx) = 0;
  virtual void exitInitializerclause(JennyParser::InitializerclauseContext *ctx) = 0;

  virtual void enterInitializerlist(JennyParser::InitializerlistContext *ctx) = 0;
  virtual void exitInitializerlist(JennyParser::InitializerlistContext *ctx) = 0;

  virtual void enterBracedinitlist(JennyParser::BracedinitlistContext *ctx) = 0;
  virtual void exitBracedinitlist(JennyParser::BracedinitlistContext *ctx) = 0;

  virtual void enterClassname(JennyParser::ClassnameContext *ctx) = 0;
  virtual void exitClassname(JennyParser::ClassnameContext *ctx) = 0;

  virtual void enterClassspecifier(JennyParser::ClassspecifierContext *ctx) = 0;
  virtual void exitClassspecifier(JennyParser::ClassspecifierContext *ctx) = 0;

  virtual void enterClasshead(JennyParser::ClassheadContext *ctx) = 0;
  virtual void exitClasshead(JennyParser::ClassheadContext *ctx) = 0;

  virtual void enterClassheadname(JennyParser::ClassheadnameContext *ctx) = 0;
  virtual void exitClassheadname(JennyParser::ClassheadnameContext *ctx) = 0;

  virtual void enterClassvirtspecifier(JennyParser::ClassvirtspecifierContext *ctx) = 0;
  virtual void exitClassvirtspecifier(JennyParser::ClassvirtspecifierContext *ctx) = 0;

  virtual void enterClasskey(JennyParser::ClasskeyContext *ctx) = 0;
  virtual void exitClasskey(JennyParser::ClasskeyContext *ctx) = 0;

  virtual void enterMemberspecification(JennyParser::MemberspecificationContext *ctx) = 0;
  virtual void exitMemberspecification(JennyParser::MemberspecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(JennyParser::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(JennyParser::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberdeclaratorlist(JennyParser::MemberdeclaratorlistContext *ctx) = 0;
  virtual void exitMemberdeclaratorlist(JennyParser::MemberdeclaratorlistContext *ctx) = 0;

  virtual void enterMemberdeclarator(JennyParser::MemberdeclaratorContext *ctx) = 0;
  virtual void exitMemberdeclarator(JennyParser::MemberdeclaratorContext *ctx) = 0;

  virtual void enterVirtspecifierseq(JennyParser::VirtspecifierseqContext *ctx) = 0;
  virtual void exitVirtspecifierseq(JennyParser::VirtspecifierseqContext *ctx) = 0;

  virtual void enterVirtspecifier(JennyParser::VirtspecifierContext *ctx) = 0;
  virtual void exitVirtspecifier(JennyParser::VirtspecifierContext *ctx) = 0;

  virtual void enterPurespecifier(JennyParser::PurespecifierContext *ctx) = 0;
  virtual void exitPurespecifier(JennyParser::PurespecifierContext *ctx) = 0;

  virtual void enterBaseclause(JennyParser::BaseclauseContext *ctx) = 0;
  virtual void exitBaseclause(JennyParser::BaseclauseContext *ctx) = 0;

  virtual void enterBasespecifierlist(JennyParser::BasespecifierlistContext *ctx) = 0;
  virtual void exitBasespecifierlist(JennyParser::BasespecifierlistContext *ctx) = 0;

  virtual void enterBasespecifier(JennyParser::BasespecifierContext *ctx) = 0;
  virtual void exitBasespecifier(JennyParser::BasespecifierContext *ctx) = 0;

  virtual void enterClassordecltype(JennyParser::ClassordecltypeContext *ctx) = 0;
  virtual void exitClassordecltype(JennyParser::ClassordecltypeContext *ctx) = 0;

  virtual void enterBasetypespecifier(JennyParser::BasetypespecifierContext *ctx) = 0;
  virtual void exitBasetypespecifier(JennyParser::BasetypespecifierContext *ctx) = 0;

  virtual void enterAccessspecifier(JennyParser::AccessspecifierContext *ctx) = 0;
  virtual void exitAccessspecifier(JennyParser::AccessspecifierContext *ctx) = 0;

  virtual void enterConversionfunctionid(JennyParser::ConversionfunctionidContext *ctx) = 0;
  virtual void exitConversionfunctionid(JennyParser::ConversionfunctionidContext *ctx) = 0;

  virtual void enterConversiontypeid(JennyParser::ConversiontypeidContext *ctx) = 0;
  virtual void exitConversiontypeid(JennyParser::ConversiontypeidContext *ctx) = 0;

  virtual void enterConversiondeclarator(JennyParser::ConversiondeclaratorContext *ctx) = 0;
  virtual void exitConversiondeclarator(JennyParser::ConversiondeclaratorContext *ctx) = 0;

  virtual void enterCtorinitializer(JennyParser::CtorinitializerContext *ctx) = 0;
  virtual void exitCtorinitializer(JennyParser::CtorinitializerContext *ctx) = 0;

  virtual void enterMeminitializerlist(JennyParser::MeminitializerlistContext *ctx) = 0;
  virtual void exitMeminitializerlist(JennyParser::MeminitializerlistContext *ctx) = 0;

  virtual void enterMeminitializer(JennyParser::MeminitializerContext *ctx) = 0;
  virtual void exitMeminitializer(JennyParser::MeminitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(JennyParser::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(JennyParser::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorfunctionid(JennyParser::OperatorfunctionidContext *ctx) = 0;
  virtual void exitOperatorfunctionid(JennyParser::OperatorfunctionidContext *ctx) = 0;

  virtual void enterLiteraloperatorid(JennyParser::LiteraloperatoridContext *ctx) = 0;
  virtual void exitLiteraloperatorid(JennyParser::LiteraloperatoridContext *ctx) = 0;

  virtual void enterTemplatedeclaration(JennyParser::TemplatedeclarationContext *ctx) = 0;
  virtual void exitTemplatedeclaration(JennyParser::TemplatedeclarationContext *ctx) = 0;

  virtual void enterTemplateparameterlist(JennyParser::TemplateparameterlistContext *ctx) = 0;
  virtual void exitTemplateparameterlist(JennyParser::TemplateparameterlistContext *ctx) = 0;

  virtual void enterTemplateparameter(JennyParser::TemplateparameterContext *ctx) = 0;
  virtual void exitTemplateparameter(JennyParser::TemplateparameterContext *ctx) = 0;

  virtual void enterTypeparameter(JennyParser::TypeparameterContext *ctx) = 0;
  virtual void exitTypeparameter(JennyParser::TypeparameterContext *ctx) = 0;

  virtual void enterSimpletemplateid(JennyParser::SimpletemplateidContext *ctx) = 0;
  virtual void exitSimpletemplateid(JennyParser::SimpletemplateidContext *ctx) = 0;

  virtual void enterTemplateid(JennyParser::TemplateidContext *ctx) = 0;
  virtual void exitTemplateid(JennyParser::TemplateidContext *ctx) = 0;

  virtual void enterTemplatename(JennyParser::TemplatenameContext *ctx) = 0;
  virtual void exitTemplatename(JennyParser::TemplatenameContext *ctx) = 0;

  virtual void enterTemplateargumentlist(JennyParser::TemplateargumentlistContext *ctx) = 0;
  virtual void exitTemplateargumentlist(JennyParser::TemplateargumentlistContext *ctx) = 0;

  virtual void enterTemplateargument(JennyParser::TemplateargumentContext *ctx) = 0;
  virtual void exitTemplateargument(JennyParser::TemplateargumentContext *ctx) = 0;

  virtual void enterTypenamespecifier(JennyParser::TypenamespecifierContext *ctx) = 0;
  virtual void exitTypenamespecifier(JennyParser::TypenamespecifierContext *ctx) = 0;

  virtual void enterExplicitinstantiation(JennyParser::ExplicitinstantiationContext *ctx) = 0;
  virtual void exitExplicitinstantiation(JennyParser::ExplicitinstantiationContext *ctx) = 0;

  virtual void enterExplicitspecialization(JennyParser::ExplicitspecializationContext *ctx) = 0;
  virtual void exitExplicitspecialization(JennyParser::ExplicitspecializationContext *ctx) = 0;

  virtual void enterTryblock(JennyParser::TryblockContext *ctx) = 0;
  virtual void exitTryblock(JennyParser::TryblockContext *ctx) = 0;

  virtual void enterFunctiontryblock(JennyParser::FunctiontryblockContext *ctx) = 0;
  virtual void exitFunctiontryblock(JennyParser::FunctiontryblockContext *ctx) = 0;

  virtual void enterHandlerseq(JennyParser::HandlerseqContext *ctx) = 0;
  virtual void exitHandlerseq(JennyParser::HandlerseqContext *ctx) = 0;

  virtual void enterHandler(JennyParser::HandlerContext *ctx) = 0;
  virtual void exitHandler(JennyParser::HandlerContext *ctx) = 0;

  virtual void enterExceptiondeclaration(JennyParser::ExceptiondeclarationContext *ctx) = 0;
  virtual void exitExceptiondeclaration(JennyParser::ExceptiondeclarationContext *ctx) = 0;

  virtual void enterThrowexpression(JennyParser::ThrowexpressionContext *ctx) = 0;
  virtual void exitThrowexpression(JennyParser::ThrowexpressionContext *ctx) = 0;

  virtual void enterExceptionspecification(JennyParser::ExceptionspecificationContext *ctx) = 0;
  virtual void exitExceptionspecification(JennyParser::ExceptionspecificationContext *ctx) = 0;

  virtual void enterDynamicexceptionspecification(JennyParser::DynamicexceptionspecificationContext *ctx) = 0;
  virtual void exitDynamicexceptionspecification(JennyParser::DynamicexceptionspecificationContext *ctx) = 0;

  virtual void enterTypeidlist(JennyParser::TypeidlistContext *ctx) = 0;
  virtual void exitTypeidlist(JennyParser::TypeidlistContext *ctx) = 0;

  virtual void enterNoexceptspecification(JennyParser::NoexceptspecificationContext *ctx) = 0;
  virtual void exitNoexceptspecification(JennyParser::NoexceptspecificationContext *ctx) = 0;

  virtual void enterTheoperator(JennyParser::TheoperatorContext *ctx) = 0;
  virtual void exitTheoperator(JennyParser::TheoperatorContext *ctx) = 0;

  virtual void enterLiteral(JennyParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(JennyParser::LiteralContext *ctx) = 0;

  virtual void enterBooleanliteral(JennyParser::BooleanliteralContext *ctx) = 0;
  virtual void exitBooleanliteral(JennyParser::BooleanliteralContext *ctx) = 0;

  virtual void enterPointerliteral(JennyParser::PointerliteralContext *ctx) = 0;
  virtual void exitPointerliteral(JennyParser::PointerliteralContext *ctx) = 0;

  virtual void enterUserdefinedliteral(JennyParser::UserdefinedliteralContext *ctx) = 0;
  virtual void exitUserdefinedliteral(JennyParser::UserdefinedliteralContext *ctx) = 0;


};

