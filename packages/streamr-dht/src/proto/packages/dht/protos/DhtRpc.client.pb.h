// generated by the protocol buffer streamr pluging. DO NOT EDIT!
// generated from protobuf file "packages/dht/protos/DhtRpc.proto"

#ifndef STREAMR_PROTORPC_DHTRPC_CLIENT_PB_H
#define STREAMR_PROTORPC_DHTRPC_CLIENT_PB_H

#include <folly/experimental/coro/Task.h>
#include "DhtRpc.pb.h" // NOLINT
#include "streamr-proto-rpc/ProtoCallContext.hpp"
#include "streamr-proto-rpc/RpcCommunicator.hpp"


namespace dht {
class DhtNodeRpcClient {
private:
RpcCommunicator& communicator;
public:
    DhtNodeRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<ClosestPeersResponse> getClosestPeers(const ClosestPeersRequest& request, const ProtoCallContext& callContext) {
        return communicator.request<ClosestPeersResponse, ClosestPeersRequest>("getClosestPeers", request, callContext);
    }
    folly::coro::Task<ClosestRingPeersResponse> getClosestRingPeers(const ClosestRingPeersRequest& request, const ProtoCallContext& callContext) {
        return communicator.request<ClosestRingPeersResponse, ClosestRingPeersRequest>("getClosestRingPeers", request, callContext);
    }
    folly::coro::Task<PingResponse> ping(const PingRequest& request, const ProtoCallContext& callContext) {
        return communicator.request<PingResponse, PingRequest>("ping", request, callContext);
    }
    folly::coro::Task<void> leaveNotice(const LeaveNotice& request, const ProtoCallContext& callContext) {
        return communicator.notify<LeaveNotice>("leaveNotice", request, callContext);
    }
}; // class DhtNodeRpcClient
class RouterRpcClient {
private:
RpcCommunicator& communicator;
public:
    RouterRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<RouteMessageAck> routeMessage(const RouteMessageWrapper& request, const ProtoCallContext& callContext) {
        return communicator.request<RouteMessageAck, RouteMessageWrapper>("routeMessage", request, callContext);
    }
    folly::coro::Task<RouteMessageAck> forwardMessage(const RouteMessageWrapper& request, const ProtoCallContext& callContext) {
        return communicator.request<RouteMessageAck, RouteMessageWrapper>("forwardMessage", request, callContext);
    }
}; // class RouterRpcClient
class RecursiveOperationRpcClient {
private:
RpcCommunicator& communicator;
public:
    RecursiveOperationRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<RouteMessageAck> routeRequest(const RouteMessageWrapper& request, const ProtoCallContext& callContext) {
        return communicator.request<RouteMessageAck, RouteMessageWrapper>("routeRequest", request, callContext);
    }
}; // class RecursiveOperationRpcClient
class StoreRpcClient {
private:
RpcCommunicator& communicator;
public:
    StoreRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<StoreDataResponse> storeData(const StoreDataRequest& request, const ProtoCallContext& callContext) {
        return communicator.request<StoreDataResponse, StoreDataRequest>("storeData", request, callContext);
    }
    folly::coro::Task<void> replicateData(const ReplicateDataRequest& request, const ProtoCallContext& callContext) {
        return communicator.notify<ReplicateDataRequest>("replicateData", request, callContext);
    }
}; // class StoreRpcClient
class RecursiveOperationSessionRpcClient {
private:
RpcCommunicator& communicator;
public:
    RecursiveOperationSessionRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<void> sendResponse(const RecursiveOperationResponse& request, const ProtoCallContext& callContext) {
        return communicator.notify<RecursiveOperationResponse>("sendResponse", request, callContext);
    }
}; // class RecursiveOperationSessionRpcClient
class WebsocketClientConnectorRpcClient {
private:
RpcCommunicator& communicator;
public:
    WebsocketClientConnectorRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<void> requestConnection(const WebsocketConnectionRequest& request, const ProtoCallContext& callContext) {
        return communicator.notify<WebsocketConnectionRequest>("requestConnection", request, callContext);
    }
}; // class WebsocketClientConnectorRpcClient
class WebrtcConnectorRpcClient {
private:
RpcCommunicator& communicator;
public:
    WebrtcConnectorRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<void> requestConnection(const WebrtcConnectionRequest& request, const ProtoCallContext& callContext) {
        return communicator.notify<WebrtcConnectionRequest>("requestConnection", request, callContext);
    }
    folly::coro::Task<void> rtcOffer(const RtcOffer& request, const ProtoCallContext& callContext) {
        return communicator.notify<RtcOffer>("rtcOffer", request, callContext);
    }
    folly::coro::Task<void> rtcAnswer(const RtcAnswer& request, const ProtoCallContext& callContext) {
        return communicator.notify<RtcAnswer>("rtcAnswer", request, callContext);
    }
    folly::coro::Task<void> iceCandidate(const IceCandidate& request, const ProtoCallContext& callContext) {
        return communicator.notify<IceCandidate>("iceCandidate", request, callContext);
    }
}; // class WebrtcConnectorRpcClient
class ConnectionLockRpcClient {
private:
RpcCommunicator& communicator;
public:
    ConnectionLockRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<LockResponse> lockRequest(const LockRequest& request, const ProtoCallContext& callContext) {
        return communicator.request<LockResponse, LockRequest>("lockRequest", request, callContext);
    }
    folly::coro::Task<void> unlockRequest(const UnlockRequest& request, const ProtoCallContext& callContext) {
        return communicator.notify<UnlockRequest>("unlockRequest", request, callContext);
    }
    folly::coro::Task<void> gracefulDisconnect(const DisconnectNotice& request, const ProtoCallContext& callContext) {
        return communicator.notify<DisconnectNotice>("gracefulDisconnect", request, callContext);
    }
}; // class ConnectionLockRpcClient
class ExternalApiRpcClient {
private:
RpcCommunicator& communicator;
public:
    ExternalApiRpcClient(RpcCommunicator& communicator) : communicator(communicator) {}
    folly::coro::Task<ExternalFetchDataResponse> externalFetchData(const ExternalFetchDataRequest& request, const ProtoCallContext& callContext) {
        return communicator.request<ExternalFetchDataResponse, ExternalFetchDataRequest>("externalFetchData", request, callContext);
    }
    folly::coro::Task<ExternalStoreDataResponse> externalStoreData(const ExternalStoreDataRequest& request, const ProtoCallContext& callContext) {
        return communicator.request<ExternalStoreDataResponse, ExternalStoreDataRequest>("externalStoreData", request, callContext);
    }
}; // class ExternalApiRpcClient
}; // namespace dht

#endif // STREAMR_PROTORPC_DHTRPC_CLIENT_PB_H

