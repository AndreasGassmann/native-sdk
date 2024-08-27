// Generated by the protocol buffer streamr pluging. DO NOT EDIT!
// Generated from protobuf file "packages/dht/protos/DhtRpc.proto"

#ifndef STREAMR_PROTORPC_DHTRPC_SERVER_PB_H
#define STREAMR_PROTORPC_DHTRPC_SERVER_PB_H

#include "DhtRpc.pb.h" // NOLINT 
#include <folly/experimental/coro/Task.h>

namespace dht {
class DhtNodeRpc {
public:
   virtual ~DhtNodeRpc() = default;
   virtual ClosestPeersResponse getClosestPeers(const ClosestPeersRequest& request, const ProtoCallContext& callContext) = 0;
   virtual ClosestRingPeersResponse getClosestRingPeers(const ClosestRingPeersRequest& request, const ProtoCallContext& callContext) = 0;
   virtual PingResponse ping(const PingRequest& request, const ProtoCallContext& callContext) = 0;
   virtual void leaveNotice(const LeaveNotice& request, const ProtoCallContext& callContext) = 0;
}; // class DhtNodeRpc
class RouterRpc {
public:
   virtual ~RouterRpc() = default;
   virtual RouteMessageAck routeMessage(const RouteMessageWrapper& request, const ProtoCallContext& callContext) = 0;
   virtual RouteMessageAck forwardMessage(const RouteMessageWrapper& request, const ProtoCallContext& callContext) = 0;
}; // class RouterRpc
class RecursiveOperationRpc {
public:
   virtual ~RecursiveOperationRpc() = default;
   virtual RouteMessageAck routeRequest(const RouteMessageWrapper& request, const ProtoCallContext& callContext) = 0;
}; // class RecursiveOperationRpc
class StoreRpc {
public:
   virtual ~StoreRpc() = default;
   virtual StoreDataResponse storeData(const StoreDataRequest& request, const ProtoCallContext& callContext) = 0;
   virtual void replicateData(const ReplicateDataRequest& request, const ProtoCallContext& callContext) = 0;
}; // class StoreRpc
class RecursiveOperationSessionRpc {
public:
   virtual ~RecursiveOperationSessionRpc() = default;
   virtual void sendResponse(const RecursiveOperationResponse& request, const ProtoCallContext& callContext) = 0;
}; // class RecursiveOperationSessionRpc
class WebsocketClientConnectorRpc {
public:
   virtual ~WebsocketClientConnectorRpc() = default;
   virtual void requestConnection(const WebsocketConnectionRequest& request, const ProtoCallContext& callContext) = 0;
}; // class WebsocketClientConnectorRpc
class WebrtcConnectorRpc {
public:
   virtual ~WebrtcConnectorRpc() = default;
   virtual void requestConnection(const WebrtcConnectionRequest& request, const ProtoCallContext& callContext) = 0;
   virtual void rtcOffer(const RtcOffer& request, const ProtoCallContext& callContext) = 0;
   virtual void rtcAnswer(const RtcAnswer& request, const ProtoCallContext& callContext) = 0;
   virtual void iceCandidate(const IceCandidate& request, const ProtoCallContext& callContext) = 0;
}; // class WebrtcConnectorRpc
class ConnectionLockRpc {
public:
   virtual ~ConnectionLockRpc() = default;
   virtual LockResponse lockRequest(const LockRequest& request, const ProtoCallContext& callContext) = 0;
   virtual void unlockRequest(const UnlockRequest& request, const ProtoCallContext& callContext) = 0;
   virtual void gracefulDisconnect(const DisconnectNotice& request, const ProtoCallContext& callContext) = 0;
}; // class ConnectionLockRpc
class ExternalApiRpc {
public:
   virtual ~ExternalApiRpc() = default;
   virtual ExternalFetchDataResponse externalFetchData(const ExternalFetchDataRequest& request, const ProtoCallContext& callContext) = 0;
   virtual ExternalStoreDataResponse externalStoreData(const ExternalStoreDataRequest& request, const ProtoCallContext& callContext) = 0;
}; // class ExternalApiRpc
}; // namespace dht

#endif // STREAMR_PROTORPC_DHTRPC_SERVER_PB_H

