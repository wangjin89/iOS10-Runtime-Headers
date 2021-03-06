/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver, UITextFieldDelegate> {
    NSMutableArray * _avatarViews;
    NSArray * _containerStretchingConstraints;
    UIView * _containerView;
    NSMutableArray * _fetchResults;
    NSString * _name;
    UITextField * _nameField;
    UIFont * _nameFont;
    NSArray * _people;
    NSString * _placeholder;
    UIFont * _placeholderFont;
}

@property (nonatomic, retain) NSMutableArray *avatarViews;
@property (nonatomic, retain) NSArray *containerStretchingConstraints;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *fetchResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) UITextField *nameField;
@property (nonatomic, retain) UIFont *nameFont;
@property (nonatomic, retain) NSArray *people;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) UIFont *placeholderFont;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_contentWidth;
- (void)_updateFieldPlaceholder;
- (void)_updateFieldText;
- (void)adjustLayoutForEditing:(bool)arg1 maxWidth:(double)arg2 animated:(bool)arg3;
- (id)avatarViews;
- (id)containerStretchingConstraints;
- (id)containerView;
- (void)dealloc;
- (id)fetchResults;
- (void)finishEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 people:(id)arg2;
- (id)name;
- (id)nameField;
- (id)nameFont;
- (id)people;
- (id)placeholder;
- (id)placeholderFont;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRectForSourceView:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)resetImages;
- (void)setAvatarViews:(id)arg1;
- (void)setContainerStretchingConstraints:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameFont:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;

@end
