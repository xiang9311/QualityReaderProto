// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30000
#error This file was generated by a different version of protoc-gen-objc which is incompatible with your Protocol Buffer sources.
#endif

// @@protoc_insertion_point(imports)

CF_EXTERN_C_BEGIN

@class Organize;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum Category_Enum

// 分类
typedef GPB_ENUM(Category_Enum) {
  Category_Enum_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  // 首页
  Category_Enum_Main = 0,

  // 深度
  Category_Enum_Deep = 1,

  // 图说
  Category_Enum_Images = 2,

  // 人物
  Category_Enum_People = 3,

  // 逗你开心
  Category_Enum_Forfun = 4,

  // 外语
  Category_Enum_Foreign = 5,
};

GPBEnumDescriptor *Category_Enum_EnumDescriptor(void);

BOOL Category_Enum_IsValidValue(int32_t value);

#pragma mark - Enum ContentType

typedef GPB_ENUM(ContentType) {
  ContentType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  // 标题和一张大图
  ContentType_BigImage = 0,

  // 普通文章
  ContentType_Article = 1,

  // 短文
  ContentType_ShortArticle = 2,

  // 三张图文  三张图文详情必须是图文类型
  ContentType_ImageText = 3,
};

GPBEnumDescriptor *ContentType_EnumDescriptor(void);

BOOL ContentType_IsValidValue(int32_t value);

#pragma mark - CommonRoot

@interface CommonRoot : GPBRootObject

// The base class provides:
//   + (GPBExtensionRegistry *)extensionRegistry;
// which is an GPBExtensionRegistry that includes all the extensions defined by
// this file and all files that it depends on.

@end

#pragma mark - RequestCommon

typedef GPB_ENUM(RequestCommon_FieldNumber) {
  RequestCommon_FieldNumber_Userid = 1,
  RequestCommon_FieldNumber_Userkey = 2,
  RequestCommon_FieldNumber_Cmdid = 3,
  RequestCommon_FieldNumber_Timestamp = 4,
  RequestCommon_FieldNumber_Version = 5,
  RequestCommon_FieldNumber_Platform = 6,
};

///////////////////////////////////   请求和返回中包含的common        /////////////////////
@interface RequestCommon : GPBMessage

@property(nonatomic, readwrite) int32_t userid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userkey;

@property(nonatomic, readwrite) int32_t cmdid;

@property(nonatomic, readwrite) int64_t timestamp;

// 版本, 1.0.0a
@property(nonatomic, readwrite, copy, null_resettable) NSString *version;

// 1-Android, 2-iOS
@property(nonatomic, readwrite) int32_t platform;

@end

#pragma mark - ResponseCommon

typedef GPB_ENUM(ResponseCommon_FieldNumber) {
  ResponseCommon_FieldNumber_Code = 1,
  ResponseCommon_FieldNumber_Message = 2,
  ResponseCommon_FieldNumber_Cmdid = 3,
  ResponseCommon_FieldNumber_Timestamp = 4,
  ResponseCommon_FieldNumber_Userid = 5,
};

@interface ResponseCommon : GPBMessage

//状态码   0：正常  其他数值表示有错误
@property(nonatomic, readwrite) int32_t code;

@property(nonatomic, readwrite, copy, null_resettable) NSString *message;

@property(nonatomic, readwrite) int32_t cmdid;

@property(nonatomic, readwrite) int64_t timestamp;

@property(nonatomic, readwrite) int32_t userid;

@end

#pragma mark - Organize

typedef GPB_ENUM(Organize_FieldNumber) {
  Organize_FieldNumber_Id_p = 1,
  Organize_FieldNumber_Name = 2,
  Organize_FieldNumber_Avatar = 3,
};

//组织
@interface Organize : GPBMessage

// 组织的id
@property(nonatomic, readwrite) int32_t id_p;

// 组织名
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

// 组织头像
@property(nonatomic, readwrite, copy, null_resettable) NSString *avatar;

@end

#pragma mark - ImageAndText

typedef GPB_ENUM(ImageAndText_FieldNumber) {
  ImageAndText_FieldNumber_Id_p = 1,
  ImageAndText_FieldNumber_ImageURL = 2,
  ImageAndText_FieldNumber_Text = 3,
};

// 图文
@interface ImageAndText : GPBMessage

// id
@property(nonatomic, readwrite) int32_t id_p;

// 图片url
@property(nonatomic, readwrite, copy, null_resettable) NSString *imageURL;

// 图片对应的文字
@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@end

#pragma mark - Article

typedef GPB_ENUM(Article_FieldNumber) {
  Article_FieldNumber_Id_p = 1,
  Article_FieldNumber_Organize = 2,
  Article_FieldNumber_ReadCount = 3,
  Article_FieldNumber_ContentType = 4,
  Article_FieldNumber_ArticleType = 5,
  Article_FieldNumber_Title = 6,
  Article_FieldNumber_SubContent = 7,
  Article_FieldNumber_Content = 8,
  Article_FieldNumber_CoverURL = 9,
  Article_FieldNumber_ImageAndTextsArray = 10,
  Article_FieldNumber_URL = 11,
  Article_FieldNumber_Category = 12,
  Article_FieldNumber_CreateTime = 13,
  Article_FieldNumber_ShareCount = 14,
  Article_FieldNumber_AuthorName = 15,
};

//文章
@interface Article : GPBMessage

// Article 的id
@property(nonatomic, readwrite) int32_t id_p;

// 所属组织
@property(nonatomic, readwrite) BOOL hasOrganize;
@property(nonatomic, readwrite, strong, null_resettable) Organize *organize;

// 列表显示的内容类型 
@property(nonatomic, readwrite) ContentType contentType;

// 文章类型，涉及到前端页面跳转 1：web， 2：普通文章（一张cover） 3：图文（类似网易图文）
@property(nonatomic, readwrite) int32_t articleType;

// title
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

// 摘要
@property(nonatomic, readwrite, copy, null_resettable) NSString *subContent;

// 全部内容（短文）
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

// cover图url
@property(nonatomic, readwrite, copy, null_resettable) NSString *coverURL;

// 图文列表
// |imageAndTextsArray| contains |ImageAndText|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *imageAndTextsArray;
@property(nonatomic, readonly) NSUInteger imageAndTextsArray_Count;

// content url
@property(nonatomic, readwrite, copy, null_resettable) NSString *uRL;

// 文章分类
@property(nonatomic, readwrite) Category_Enum category;

// 创建时间"2015-01-23 19:00:02"
@property(nonatomic, readwrite, copy, null_resettable) NSString *createTime;

// 阅读量
@property(nonatomic, readwrite) int32_t readCount;

// 分享量
@property(nonatomic, readwrite) int32_t shareCount;

// 作者名
@property(nonatomic, readwrite, copy, null_resettable) NSString *authorName;

@end

int32_t Article_ContentType_RawValue(Article *message);
void SetArticle_ContentType_RawValue(Article *message, int32_t value);

int32_t Article_Category_RawValue(Article *message);
void SetArticle_Category_RawValue(Article *message, int32_t value);

#pragma mark - Collect

typedef GPB_ENUM(Collect_FieldNumber) {
  Collect_FieldNumber_Id_p = 1,
  Collect_FieldNumber_Organize = 2,
  Collect_FieldNumber_Title = 3,
  Collect_FieldNumber_CollectTime = 4,
  Collect_FieldNumber_ArticleType = 5,
  Collect_FieldNumber_ArticleId = 7,
};

//收藏
@interface Collect : GPBMessage

// collect id
@property(nonatomic, readwrite) int32_t id_p;

// 组织
@property(nonatomic, readwrite) BOOL hasOrganize;
@property(nonatomic, readwrite, strong, null_resettable) Organize *organize;

// 显示的标题
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

// 收藏的时间 "2015-01-23 19:00:02"
@property(nonatomic, readwrite, copy, null_resettable) NSString *collectTime;

// 收藏的类型。 1：web， 2：普通文章（一张cover） 3：图文（类似网易图文）
@property(nonatomic, readwrite) int32_t articleType;

//string url = 6;                // 如果是网页，则这个是网页的url
@property(nonatomic, readwrite) int32_t articleId;

@end

#pragma mark - DetailUser

typedef GPB_ENUM(DetailUser_FieldNumber) {
  DetailUser_FieldNumber_UserId = 1,
  DetailUser_FieldNumber_UserName = 2,
  DetailUser_FieldNumber_Avatar = 3,
  DetailUser_FieldNumber_WxNo = 4,
  DetailUser_FieldNumber_WbNo = 5,
  DetailUser_FieldNumber_ArticlesArray = 6,
};

// 用户详情
@interface DetailUser : GPBMessage

@property(nonatomic, readwrite) int32_t userId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *avatar;

// 微信号
@property(nonatomic, readwrite, copy, null_resettable) NSString *wxNo;

// 微博名
@property(nonatomic, readwrite, copy, null_resettable) NSString *wbNo;

// 它的文章列表
// |articlesArray| contains |Article|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *articlesArray;
@property(nonatomic, readonly) NSUInteger articlesArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

// @@protoc_insertion_point(global_scope)
