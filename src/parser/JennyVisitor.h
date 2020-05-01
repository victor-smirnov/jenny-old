
// Generated from Jenny.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "JennyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by JennyParser.
 */
class  JennyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by JennyParser.
   */
    virtual antlrcpp::Any visitTranslationunit(JennyParser::TranslationunitContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryexpression(JennyParser::PrimaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdexpression(JennyParser::IdexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnqualifiedid(JennyParser::UnqualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedid(JennyParser::QualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitNestednamespecifier(JennyParser::NestednamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitLambdaexpression(JennyParser::LambdaexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaintroducer(JennyParser::LambdaintroducerContext *context) = 0;

    virtual antlrcpp::Any visitLambdacapture(JennyParser::LambdacaptureContext *context) = 0;

    virtual antlrcpp::Any visitCapturedefault(JennyParser::CapturedefaultContext *context) = 0;

    virtual antlrcpp::Any visitCapturelist(JennyParser::CapturelistContext *context) = 0;

    virtual antlrcpp::Any visitCapture(JennyParser::CaptureContext *context) = 0;

    virtual antlrcpp::Any visitSimplecapture(JennyParser::SimplecaptureContext *context) = 0;

    virtual antlrcpp::Any visitInitcapture(JennyParser::InitcaptureContext *context) = 0;

    virtual antlrcpp::Any visitLambdadeclarator(JennyParser::LambdadeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPostfixexpression(JennyParser::PostfixexpressionContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofexpr(JennyParser::TypeidofexprContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofthetypeid(JennyParser::TypeidofthetypeidContext *context) = 0;

    virtual antlrcpp::Any visitExpressionlist(JennyParser::ExpressionlistContext *context) = 0;

    virtual antlrcpp::Any visitPseudodestructorname(JennyParser::PseudodestructornameContext *context) = 0;

    virtual antlrcpp::Any visitUnaryexpression(JennyParser::UnaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryoperator(JennyParser::UnaryoperatorContext *context) = 0;

    virtual antlrcpp::Any visitNewexpression(JennyParser::NewexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNewplacement(JennyParser::NewplacementContext *context) = 0;

    virtual antlrcpp::Any visitNewtypeid(JennyParser::NewtypeidContext *context) = 0;

    virtual antlrcpp::Any visitNewdeclarator(JennyParser::NewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrnewdeclarator(JennyParser::NoptrnewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNewinitializer(JennyParser::NewinitializerContext *context) = 0;

    virtual antlrcpp::Any visitDeleteexpression(JennyParser::DeleteexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptexpression(JennyParser::NoexceptexpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastexpression(JennyParser::CastexpressionContext *context) = 0;

    virtual antlrcpp::Any visitPmexpression(JennyParser::PmexpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeexpression(JennyParser::MultiplicativeexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveexpression(JennyParser::AdditiveexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftexpression(JennyParser::ShiftexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftoperator(JennyParser::ShiftoperatorContext *context) = 0;

    virtual antlrcpp::Any visitRelationalexpression(JennyParser::RelationalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityexpression(JennyParser::EqualityexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndexpression(JennyParser::AndexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveorexpression(JennyParser::ExclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveorexpression(JennyParser::InclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalandexpression(JennyParser::LogicalandexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalorexpression(JennyParser::LogicalorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalexpression(JennyParser::ConditionalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentexpression(JennyParser::AssignmentexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentoperator(JennyParser::AssignmentoperatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression(JennyParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConstantexpression(JennyParser::ConstantexpressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(JennyParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledstatement(JennyParser::LabeledstatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionstatement(JennyParser::ExpressionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundstatement(JennyParser::CompoundstatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementseq(JennyParser::StatementseqContext *context) = 0;

    virtual antlrcpp::Any visitSelectionstatement(JennyParser::SelectionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(JennyParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitIterationstatement(JennyParser::IterationstatementContext *context) = 0;

    virtual antlrcpp::Any visitForinitstatement(JennyParser::ForinitstatementContext *context) = 0;

    virtual antlrcpp::Any visitForrangedeclaration(JennyParser::ForrangedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitForrangeinitializer(JennyParser::ForrangeinitializerContext *context) = 0;

    virtual antlrcpp::Any visitJumpstatement(JennyParser::JumpstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationstatement(JennyParser::DeclarationstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationseq(JennyParser::DeclarationseqContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(JennyParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitBlockdeclaration(JennyParser::BlockdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAliasdeclaration(JennyParser::AliasdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSimpledeclaration(JennyParser::SimpledeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatic_assertdeclaration(JennyParser::Static_assertdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEmptydeclaration(JennyParser::EmptydeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAttributedeclaration(JennyParser::AttributedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifier(JennyParser::DeclspecifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifierseq(JennyParser::DeclspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitStorageclassspecifier(JennyParser::StorageclassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionspecifier(JennyParser::FunctionspecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypedefname(JennyParser::TypedefnameContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifier(JennyParser::TypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifier(JennyParser::TrailingtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifierseq(JennyParser::TypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifierseq(JennyParser::TrailingtypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitSimpletypespecifier(JennyParser::SimpletypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitThetypename(JennyParser::ThetypenameContext *context) = 0;

    virtual antlrcpp::Any visitDecltypespecifier(JennyParser::DecltypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitElaboratedtypespecifier(JennyParser::ElaboratedtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumname(JennyParser::EnumnameContext *context) = 0;

    virtual antlrcpp::Any visitEnumspecifier(JennyParser::EnumspecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumhead(JennyParser::EnumheadContext *context) = 0;

    virtual antlrcpp::Any visitOpaqueenumdeclaration(JennyParser::OpaqueenumdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumkey(JennyParser::EnumkeyContext *context) = 0;

    virtual antlrcpp::Any visitEnumbase(JennyParser::EnumbaseContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorlist(JennyParser::EnumeratorlistContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratordefinition(JennyParser::EnumeratordefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(JennyParser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitNamespacename(JennyParser::NamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacename(JennyParser::OriginalnamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitNamespacedefinition(JennyParser::NamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamednamespacedefinition(JennyParser::NamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacedefinition(JennyParser::OriginalnamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitExtensionnamespacedefinition(JennyParser::ExtensionnamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitUnnamednamespacedefinition(JennyParser::UnnamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamespacebody(JennyParser::NamespacebodyContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealias(JennyParser::NamespacealiasContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealiasdefinition(JennyParser::NamespacealiasdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitQualifiednamespacespecifier(JennyParser::QualifiednamespacespecifierContext *context) = 0;

    virtual antlrcpp::Any visitUsingdeclaration(JennyParser::UsingdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUsingdirective(JennyParser::UsingdirectiveContext *context) = 0;

    virtual antlrcpp::Any visitAsmdefinition(JennyParser::AsmdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitLinkagespecification(JennyParser::LinkagespecificationContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifierseq(JennyParser::AttributespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifier(JennyParser::AttributespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAlignmentspecifier(JennyParser::AlignmentspecifierContext *context) = 0;

    virtual antlrcpp::Any visitAttributelist(JennyParser::AttributelistContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(JennyParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAttributetoken(JennyParser::AttributetokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributescopedtoken(JennyParser::AttributescopedtokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributenamespace(JennyParser::AttributenamespaceContext *context) = 0;

    virtual antlrcpp::Any visitAttributeargumentclause(JennyParser::AttributeargumentclauseContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtokenseq(JennyParser::BalancedtokenseqContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtoken(JennyParser::BalancedtokenContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclaratorlist(JennyParser::InitdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclarator(JennyParser::InitdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(JennyParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrdeclarator(JennyParser::PtrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrdeclarator(JennyParser::NoptrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParametersandqualifiers(JennyParser::ParametersandqualifiersContext *context) = 0;

    virtual antlrcpp::Any visitTrailingreturntype(JennyParser::TrailingreturntypeContext *context) = 0;

    virtual antlrcpp::Any visitPtroperator(JennyParser::PtroperatorContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifierseq(JennyParser::CvqualifierseqContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifier(JennyParser::CvqualifierContext *context) = 0;

    virtual antlrcpp::Any visitRefqualifier(JennyParser::RefqualifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclaratorid(JennyParser::DeclaratoridContext *context) = 0;

    virtual antlrcpp::Any visitThetypeid(JennyParser::ThetypeidContext *context) = 0;

    virtual antlrcpp::Any visitAbstractdeclarator(JennyParser::AbstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrabstractdeclarator(JennyParser::PtrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractdeclarator(JennyParser::NoptrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAbstractpackdeclarator(JennyParser::AbstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractpackdeclarator(JennyParser::NoptrabstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationclause(JennyParser::ParameterdeclarationclauseContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationlist(JennyParser::ParameterdeclarationlistContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclaration(JennyParser::ParameterdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctiondefinition(JennyParser::FunctiondefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionbody(JennyParser::FunctionbodyContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(JennyParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitBraceorequalinitializer(JennyParser::BraceorequalinitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerclause(JennyParser::InitializerclauseContext *context) = 0;

    virtual antlrcpp::Any visitInitializerlist(JennyParser::InitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitBracedinitlist(JennyParser::BracedinitlistContext *context) = 0;

    virtual antlrcpp::Any visitClassname(JennyParser::ClassnameContext *context) = 0;

    virtual antlrcpp::Any visitClassspecifier(JennyParser::ClassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasshead(JennyParser::ClassheadContext *context) = 0;

    virtual antlrcpp::Any visitClassheadname(JennyParser::ClassheadnameContext *context) = 0;

    virtual antlrcpp::Any visitClassvirtspecifier(JennyParser::ClassvirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasskey(JennyParser::ClasskeyContext *context) = 0;

    virtual antlrcpp::Any visitMemberspecification(JennyParser::MemberspecificationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaration(JennyParser::MemberdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaratorlist(JennyParser::MemberdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclarator(JennyParser::MemberdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifierseq(JennyParser::VirtspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifier(JennyParser::VirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitPurespecifier(JennyParser::PurespecifierContext *context) = 0;

    virtual antlrcpp::Any visitBaseclause(JennyParser::BaseclauseContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifierlist(JennyParser::BasespecifierlistContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifier(JennyParser::BasespecifierContext *context) = 0;

    virtual antlrcpp::Any visitClassordecltype(JennyParser::ClassordecltypeContext *context) = 0;

    virtual antlrcpp::Any visitBasetypespecifier(JennyParser::BasetypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAccessspecifier(JennyParser::AccessspecifierContext *context) = 0;

    virtual antlrcpp::Any visitConversionfunctionid(JennyParser::ConversionfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitConversiontypeid(JennyParser::ConversiontypeidContext *context) = 0;

    virtual antlrcpp::Any visitConversiondeclarator(JennyParser::ConversiondeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitCtorinitializer(JennyParser::CtorinitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerlist(JennyParser::MeminitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializer(JennyParser::MeminitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerid(JennyParser::MeminitializeridContext *context) = 0;

    virtual antlrcpp::Any visitOperatorfunctionid(JennyParser::OperatorfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitLiteraloperatorid(JennyParser::LiteraloperatoridContext *context) = 0;

    virtual antlrcpp::Any visitTemplatedeclaration(JennyParser::TemplatedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameterlist(JennyParser::TemplateparameterlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameter(JennyParser::TemplateparameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeparameter(JennyParser::TypeparameterContext *context) = 0;

    virtual antlrcpp::Any visitSimpletemplateid(JennyParser::SimpletemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplateid(JennyParser::TemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplatename(JennyParser::TemplatenameContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargumentlist(JennyParser::TemplateargumentlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargument(JennyParser::TemplateargumentContext *context) = 0;

    virtual antlrcpp::Any visitTypenamespecifier(JennyParser::TypenamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitExplicitinstantiation(JennyParser::ExplicitinstantiationContext *context) = 0;

    virtual antlrcpp::Any visitExplicitspecialization(JennyParser::ExplicitspecializationContext *context) = 0;

    virtual antlrcpp::Any visitTryblock(JennyParser::TryblockContext *context) = 0;

    virtual antlrcpp::Any visitFunctiontryblock(JennyParser::FunctiontryblockContext *context) = 0;

    virtual antlrcpp::Any visitHandlerseq(JennyParser::HandlerseqContext *context) = 0;

    virtual antlrcpp::Any visitHandler(JennyParser::HandlerContext *context) = 0;

    virtual antlrcpp::Any visitExceptiondeclaration(JennyParser::ExceptiondeclarationContext *context) = 0;

    virtual antlrcpp::Any visitThrowexpression(JennyParser::ThrowexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExceptionspecification(JennyParser::ExceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitDynamicexceptionspecification(JennyParser::DynamicexceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitTypeidlist(JennyParser::TypeidlistContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptspecification(JennyParser::NoexceptspecificationContext *context) = 0;

    virtual antlrcpp::Any visitTheoperator(JennyParser::TheoperatorContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(JennyParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanliteral(JennyParser::BooleanliteralContext *context) = 0;

    virtual antlrcpp::Any visitPointerliteral(JennyParser::PointerliteralContext *context) = 0;

    virtual antlrcpp::Any visitUserdefinedliteral(JennyParser::UserdefinedliteralContext *context) = 0;


};

