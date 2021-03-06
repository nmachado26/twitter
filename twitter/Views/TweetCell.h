//
//  TweetCell.h
//  twitter
//
//  Created by Nicolas Machado on 7/3/18.
//  Copyright © 2018 Emerson Malca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"
#import "User.h"
#import "APIManager.h"

@protocol TweetCellDelegate;

@interface TweetCell : UITableViewCell

//dictionary
@property (nonatomic, strong) Tweet *tweet;

//labels
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel; //might use in fdifferent threads (different parallel processors). Qill keep information in sync, only need atomic when you want to optimize, want to edit that acess
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *retweetsLabel;
@property (weak, nonatomic) IBOutlet UILabel *likesLabel;
@property (weak, nonatomic) IBOutlet UILabel *contentLabel;
@property (weak, nonatomic) IBOutlet UILabel *atLabel;
//images
@property (weak, nonatomic) IBOutlet UIImageView *profilePicture;
@property (weak, nonatomic) IBOutlet UIImageView *verifiedIcon;
@property (weak, nonatomic) IBOutlet UILabel *commentsLabel;
@property (weak, nonatomic) IBOutlet UIButton *favoriteButton;
@property (weak, nonatomic) IBOutlet UIButton *retweetButton;

@property (nonatomic, weak) id<TweetCellDelegate> delegate;

//methods
- (void)configureTweetCell:(Tweet *)tweet;
@end

@protocol TweetCellDelegate
- (void)tweetCell:(TweetCell *) tweetCell didTap: (User *)user;
@end
