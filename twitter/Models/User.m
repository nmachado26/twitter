//
//  User.m
//  twitter
//
//  Created by Nicolas Machado on 7/2/18.
//  Copyright © 2018 Emerson Malca. All rights reserved.
//


/*
 // initialize user
 NSDictionary *user = dictionary[@"user"];
 self.user = [[User alloc] initWithDictionary:user];
 */

#import "User.h"

@implementation User

- (id)initWithDictionary:(NSDictionary *)dictionary{
    self = [super init];
    if (self) {
        self.name = dictionary[@"name"];
        self.screenName = dictionary[@"screen_name"];
        self.profilePictureURLString = dictionary[@"profile_image_url_https"];
        self.idStr = dictionary[@"id_str"];
        self.backgroundPictureURLString = dictionary[@"profile_banner_url"];
        self.bioString = dictionary[@"description"];
        self.verified = dictionary[@"verified"];
        self.followersCount = dictionary[@"followers_count"];
        self.followingCount = dictionary[@"friends_count"];
        self.tweetCount = dictionary[@"statuses_count"];
    }
    return self;
}

@end
