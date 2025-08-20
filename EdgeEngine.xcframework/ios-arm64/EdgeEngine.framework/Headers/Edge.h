//
//  Edge.h
//  Edge
//
//  Created by mimik on 2018-03-02.
//  Copyright © 2018 mimik technology inc. All rights reserved.
//

#import "Foundation/Foundation.h"

/// Private declaration of `Edge` platform class. **For internal mimik use.**
///
/// - Note: For more information about the mim OE runtime platform see mimik [DevDocs](https://devdocs.mimik.com/introduction)
/// - Warning: Developers **should not use this class directly**, instead the `EdgeCore` client library [API](https://mimikgit.github.io/cocoapod-EdgeCore/documentation/edgecore) should be used.
@interface Edge : NSObject {
    
}

/// Private declaration of a method starting the mim OE runtime. **For internal mimik use.**
///
/// - Parameters:
///   - port: `Port` number to host the mim OE runtime instance on, usually `8083` unless changed.
///   - nodeId: `Node` (device) identifier.
///   - name: `Node` (device) name visible to other nodes (devices) on the network.
///   - license: License and configuration for mim OE runtime.
///   - workingDirectory: Main file directory where mim OE runtime stores its configuration files, including the edge microservice containers and their data.
///   - startupParameters: Custom mim OE runtime startup parameters.
///
/// - Note: For more information about the mim OE runtime see mimik [DevDocs](https://devdocs.mimik.com/introduction)
/// - Warning: Developers **should not use this class directly**, instead the `EdgeCore` client library [API](https://mimikgit.github.io/cocoapod-EdgeCore/documentation/edgecore) should be used.
- (int)startWith:(int)port
           nodeId:(NSString *)nodeId
         nodeName:(NSString *)name
    licenseString:(NSString *)license
 workingDirectory:(NSString *)workingDirectory
startupParameters:(NSDictionary *)startupParameters;

/// Private declaration of a method stopping the mim OE runtime. **For internal mimik use.**
///
/// - Note: For more information about the mim OE runtime see mimik [DevDocs](https://devdocs.mimik.com/introduction)
/// - Warning: Developers **should not use this class directly**, instead the `EdgeCore` client library [API](https://mimikgit.github.io/cocoapod-EdgeCore/documentation/edgecore) should be used.
- (void)stop;

/// Private declaration of a method returning the mim OE runtime status code. **For internal mimik use.**
///
/// - Note: For more information about the mim OE runtime see mimik [DevDocs](https://devdocs.mimik.com/introduction)
/// - Warning: Developers **should not use this class directly**, instead the `EdgeCore` client library [API](https://mimikgit.github.io/cocoapod-EdgeCore/documentation/edgecore) should be used. [API](https://mimikgit.github.io/cocoapod-EdgeCore/documentation/edgecore)
- (int)getStatus;

@end
