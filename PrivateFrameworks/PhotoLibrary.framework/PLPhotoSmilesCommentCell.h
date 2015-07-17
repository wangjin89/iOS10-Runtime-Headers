/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoSmilesCommentCell : UITableViewCell {
    BOOL _isVideo;
    BOOL _showUserLikes;
    UILabel *_smileContentLabel;
    UIButton *_smileImageButton;
    NSOrderedSet *_userLikes;
}

@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL showUserLikes;
@property (nonatomic, readonly, retain) UILabel *smileContentLabel;
@property (nonatomic, readonly, retain) UIButton *smileImageButton;
@property (nonatomic, copy) NSOrderedSet *userLikes;

+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(BOOL)arg3;
+ (id)_smileStringForComments:(id)arg1;
+ (float)heightOfSmileCellWithComments:(id)arg1 forWidth:(float)arg2 isVideo:(BOOL)arg3 forInterfaceOrientation:(int)arg4;

- (void)_updateContent;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isVideo;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsVideo:(BOOL)arg1;
- (void)setShowUserLikes:(BOOL)arg1;
- (void)setUserLikes:(id)arg1;
- (BOOL)showUserLikes;
- (id)smileContentLabel;
- (id)smileImageButton;
- (id)userLikes;

@end