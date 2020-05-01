
// Generated from Jenny.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "JennyVisitor.h"


/**
 * This class provides an empty implementation of JennyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  JennyBaseVisitor : public JennyVisitor {
public:

  virtual antlrcpp::Any visitTranslationunit(JennyParser::TranslationunitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryexpression(JennyParser::PrimaryexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdexpression(JennyParser::IdexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnqualifiedid(JennyParser::UnqualifiedidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedid(JennyParser::QualifiedidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestednamespecifier(JennyParser::NestednamespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaexpression(JennyParser::LambdaexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaintroducer(JennyParser::LambdaintroducerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdacapture(JennyParser::LambdacaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapturedefault(JennyParser::CapturedefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapturelist(JennyParser::CapturelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapture(JennyParser::CaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimplecapture(JennyParser::SimplecaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitcapture(JennyParser::InitcaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdadeclarator(JennyParser::LambdadeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixexpression(JennyParser::PostfixexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeidofexpr(JennyParser::TypeidofexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeidofthetypeid(JennyParser::TypeidofthetypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionlist(JennyParser::ExpressionlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPseudodestructorname(JennyParser::PseudodestructornameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryexpression(JennyParser::UnaryexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryoperator(JennyParser::UnaryoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewexpression(JennyParser::NewexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewplacement(JennyParser::NewplacementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewtypeid(JennyParser::NewtypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewdeclarator(JennyParser::NewdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrnewdeclarator(JennyParser::NoptrnewdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewinitializer(JennyParser::NewinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteexpression(JennyParser::DeleteexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoexceptexpression(JennyParser::NoexceptexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastexpression(JennyParser::CastexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPmexpression(JennyParser::PmexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeexpression(JennyParser::MultiplicativeexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveexpression(JennyParser::AdditiveexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftexpression(JennyParser::ShiftexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftoperator(JennyParser::ShiftoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalexpression(JennyParser::RelationalexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityexpression(JennyParser::EqualityexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndexpression(JennyParser::AndexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExclusiveorexpression(JennyParser::ExclusiveorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclusiveorexpression(JennyParser::InclusiveorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalandexpression(JennyParser::LogicalandexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalorexpression(JennyParser::LogicalorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalexpression(JennyParser::ConditionalexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentexpression(JennyParser::AssignmentexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentoperator(JennyParser::AssignmentoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(JennyParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantexpression(JennyParser::ConstantexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(JennyParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledstatement(JennyParser::LabeledstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionstatement(JennyParser::ExpressionstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundstatement(JennyParser::CompoundstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementseq(JennyParser::StatementseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectionstatement(JennyParser::SelectionstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(JennyParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterationstatement(JennyParser::IterationstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForinitstatement(JennyParser::ForinitstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForrangedeclaration(JennyParser::ForrangedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForrangeinitializer(JennyParser::ForrangeinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJumpstatement(JennyParser::JumpstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationstatement(JennyParser::DeclarationstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationseq(JennyParser::DeclarationseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(JennyParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockdeclaration(JennyParser::BlockdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAliasdeclaration(JennyParser::AliasdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpledeclaration(JennyParser::SimpledeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatic_assertdeclaration(JennyParser::Static_assertdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptydeclaration(JennyParser::EmptydeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributedeclaration(JennyParser::AttributedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclspecifier(JennyParser::DeclspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclspecifierseq(JennyParser::DeclspecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageclassspecifier(JennyParser::StorageclassspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionspecifier(JennyParser::FunctionspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypedefname(JennyParser::TypedefnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypespecifier(JennyParser::TypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingtypespecifier(JennyParser::TrailingtypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypespecifierseq(JennyParser::TypespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingtypespecifierseq(JennyParser::TrailingtypespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpletypespecifier(JennyParser::SimpletypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThetypename(JennyParser::ThetypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecltypespecifier(JennyParser::DecltypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElaboratedtypespecifier(JennyParser::ElaboratedtypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumname(JennyParser::EnumnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumspecifier(JennyParser::EnumspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumhead(JennyParser::EnumheadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpaqueenumdeclaration(JennyParser::OpaqueenumdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumkey(JennyParser::EnumkeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumbase(JennyParser::EnumbaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumeratorlist(JennyParser::EnumeratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumeratordefinition(JennyParser::EnumeratordefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumerator(JennyParser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacename(JennyParser::NamespacenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOriginalnamespacename(JennyParser::OriginalnamespacenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacedefinition(JennyParser::NamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamednamespacedefinition(JennyParser::NamednamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOriginalnamespacedefinition(JennyParser::OriginalnamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtensionnamespacedefinition(JennyParser::ExtensionnamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnnamednamespacedefinition(JennyParser::UnnamednamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacebody(JennyParser::NamespacebodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacealias(JennyParser::NamespacealiasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacealiasdefinition(JennyParser::NamespacealiasdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiednamespacespecifier(JennyParser::QualifiednamespacespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingdeclaration(JennyParser::UsingdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingdirective(JennyParser::UsingdirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsmdefinition(JennyParser::AsmdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinkagespecification(JennyParser::LinkagespecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributespecifierseq(JennyParser::AttributespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributespecifier(JennyParser::AttributespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlignmentspecifier(JennyParser::AlignmentspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributelist(JennyParser::AttributelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(JennyParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributetoken(JennyParser::AttributetokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributescopedtoken(JennyParser::AttributescopedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributenamespace(JennyParser::AttributenamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeargumentclause(JennyParser::AttributeargumentclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBalancedtokenseq(JennyParser::BalancedtokenseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBalancedtoken(JennyParser::BalancedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitdeclaratorlist(JennyParser::InitdeclaratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitdeclarator(JennyParser::InitdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarator(JennyParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrdeclarator(JennyParser::PtrdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrdeclarator(JennyParser::NoptrdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametersandqualifiers(JennyParser::ParametersandqualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingreturntype(JennyParser::TrailingreturntypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtroperator(JennyParser::PtroperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCvqualifierseq(JennyParser::CvqualifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCvqualifier(JennyParser::CvqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRefqualifier(JennyParser::RefqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaratorid(JennyParser::DeclaratoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThetypeid(JennyParser::ThetypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbstractdeclarator(JennyParser::AbstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrabstractdeclarator(JennyParser::PtrabstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrabstractdeclarator(JennyParser::NoptrabstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbstractpackdeclarator(JennyParser::AbstractpackdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrabstractpackdeclarator(JennyParser::NoptrabstractpackdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterdeclarationclause(JennyParser::ParameterdeclarationclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterdeclarationlist(JennyParser::ParameterdeclarationlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterdeclaration(JennyParser::ParameterdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiondefinition(JennyParser::FunctiondefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionbody(JennyParser::FunctionbodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer(JennyParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraceorequalinitializer(JennyParser::BraceorequalinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerclause(JennyParser::InitializerclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerlist(JennyParser::InitializerlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracedinitlist(JennyParser::BracedinitlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassname(JennyParser::ClassnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassspecifier(JennyParser::ClassspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClasshead(JennyParser::ClassheadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassheadname(JennyParser::ClassheadnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassvirtspecifier(JennyParser::ClassvirtspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClasskey(JennyParser::ClasskeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberspecification(JennyParser::MemberspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberdeclaration(JennyParser::MemberdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberdeclaratorlist(JennyParser::MemberdeclaratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberdeclarator(JennyParser::MemberdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtspecifierseq(JennyParser::VirtspecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtspecifier(JennyParser::VirtspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPurespecifier(JennyParser::PurespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseclause(JennyParser::BaseclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasespecifierlist(JennyParser::BasespecifierlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasespecifier(JennyParser::BasespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassordecltype(JennyParser::ClassordecltypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasetypespecifier(JennyParser::BasetypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessspecifier(JennyParser::AccessspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversionfunctionid(JennyParser::ConversionfunctionidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversiontypeid(JennyParser::ConversiontypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversiondeclarator(JennyParser::ConversiondeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCtorinitializer(JennyParser::CtorinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeminitializerlist(JennyParser::MeminitializerlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeminitializer(JennyParser::MeminitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeminitializerid(JennyParser::MeminitializeridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperatorfunctionid(JennyParser::OperatorfunctionidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteraloperatorid(JennyParser::LiteraloperatoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplatedeclaration(JennyParser::TemplatedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateparameterlist(JennyParser::TemplateparameterlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateparameter(JennyParser::TemplateparameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeparameter(JennyParser::TypeparameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpletemplateid(JennyParser::SimpletemplateidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateid(JennyParser::TemplateidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplatename(JennyParser::TemplatenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateargumentlist(JennyParser::TemplateargumentlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateargument(JennyParser::TemplateargumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypenamespecifier(JennyParser::TypenamespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitinstantiation(JennyParser::ExplicitinstantiationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitspecialization(JennyParser::ExplicitspecializationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTryblock(JennyParser::TryblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiontryblock(JennyParser::FunctiontryblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerseq(JennyParser::HandlerseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler(JennyParser::HandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptiondeclaration(JennyParser::ExceptiondeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThrowexpression(JennyParser::ThrowexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptionspecification(JennyParser::ExceptionspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDynamicexceptionspecification(JennyParser::DynamicexceptionspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeidlist(JennyParser::TypeidlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoexceptspecification(JennyParser::NoexceptspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTheoperator(JennyParser::TheoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(JennyParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanliteral(JennyParser::BooleanliteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerliteral(JennyParser::PointerliteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserdefinedliteral(JennyParser::UserdefinedliteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

