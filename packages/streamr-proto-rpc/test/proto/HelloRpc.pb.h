// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HelloRpc.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_HelloRpc_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_HelloRpc_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_HelloRpc_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_HelloRpc_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_HelloRpc_2eproto;
class HelloRequest;
struct HelloRequestDefaultTypeInternal;
extern HelloRequestDefaultTypeInternal _HelloRequest_default_instance_;
class HelloResponse;
struct HelloResponseDefaultTypeInternal;
extern HelloResponseDefaultTypeInternal _HelloResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::HelloRequest* Arena::CreateMaybeMessage<::HelloRequest>(Arena*);
template<> ::HelloResponse* Arena::CreateMaybeMessage<::HelloResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class HelloRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:HelloRequest) */ {
 public:
  inline HelloRequest() : HelloRequest(nullptr) {}
  ~HelloRequest() override;
  explicit PROTOBUF_CONSTEXPR HelloRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloRequest(const HelloRequest& from);
  HelloRequest(HelloRequest&& from) noexcept
    : HelloRequest() {
    *this = ::std::move(from);
  }

  inline HelloRequest& operator=(const HelloRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloRequest& operator=(HelloRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloRequest* internal_default_instance() {
    return reinterpret_cast<const HelloRequest*>(
               &_HelloRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HelloRequest& a, HelloRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloRequest>(arena);
  }
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "HelloRequest";
  }
  protected:
  explicit HelloRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMyNameFieldNumber = 1,
  };
  // string myName = 1;
  void clear_myname();
  const std::string& myname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_myname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_myname();
  PROTOBUF_NODISCARD std::string* release_myname();
  void set_allocated_myname(std::string* myname);
  private:
  const std::string& _internal_myname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_myname(const std::string& value);
  std::string* _internal_mutable_myname();
  public:

  // @@protoc_insertion_point(class_scope:HelloRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr myname_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_HelloRpc_2eproto;
};
// -------------------------------------------------------------------

class HelloResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:HelloResponse) */ {
 public:
  inline HelloResponse() : HelloResponse(nullptr) {}
  ~HelloResponse() override;
  explicit PROTOBUF_CONSTEXPR HelloResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloResponse(const HelloResponse& from);
  HelloResponse(HelloResponse&& from) noexcept
    : HelloResponse() {
    *this = ::std::move(from);
  }

  inline HelloResponse& operator=(const HelloResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloResponse& operator=(HelloResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloResponse* internal_default_instance() {
    return reinterpret_cast<const HelloResponse*>(
               &_HelloResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HelloResponse& a, HelloResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloResponse>(arena);
  }
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "HelloResponse";
  }
  protected:
  explicit HelloResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGreetingFieldNumber = 1,
  };
  // string greeting = 1;
  void clear_greeting();
  const std::string& greeting() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_greeting(ArgT0&& arg0, ArgT... args);
  std::string* mutable_greeting();
  PROTOBUF_NODISCARD std::string* release_greeting();
  void set_allocated_greeting(std::string* greeting);
  private:
  const std::string& _internal_greeting() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_greeting(const std::string& value);
  std::string* _internal_mutable_greeting();
  public:

  // @@protoc_insertion_point(class_scope:HelloResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr greeting_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_HelloRpc_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloRequest

// string myName = 1;
inline void HelloRequest::clear_myname() {
  _impl_.myname_.ClearToEmpty();
}
inline const std::string& HelloRequest::myname() const {
  // @@protoc_insertion_point(field_get:HelloRequest.myName)
  return _internal_myname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloRequest::set_myname(ArgT0&& arg0, ArgT... args) {
 
 _impl_.myname_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:HelloRequest.myName)
}
inline std::string* HelloRequest::mutable_myname() {
  std::string* _s = _internal_mutable_myname();
  // @@protoc_insertion_point(field_mutable:HelloRequest.myName)
  return _s;
}
inline const std::string& HelloRequest::_internal_myname() const {
  return _impl_.myname_.Get();
}
inline void HelloRequest::_internal_set_myname(const std::string& value) {
  
  _impl_.myname_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloRequest::_internal_mutable_myname() {
  
  return _impl_.myname_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloRequest::release_myname() {
  // @@protoc_insertion_point(field_release:HelloRequest.myName)
  return _impl_.myname_.Release();
}
inline void HelloRequest::set_allocated_myname(std::string* myname) {
  if (myname != nullptr) {
    
  } else {
    
  }
  _impl_.myname_.SetAllocated(myname, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.myname_.IsDefault()) {
    _impl_.myname_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:HelloRequest.myName)
}

// -------------------------------------------------------------------

// HelloResponse

// string greeting = 1;
inline void HelloResponse::clear_greeting() {
  _impl_.greeting_.ClearToEmpty();
}
inline const std::string& HelloResponse::greeting() const {
  // @@protoc_insertion_point(field_get:HelloResponse.greeting)
  return _internal_greeting();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloResponse::set_greeting(ArgT0&& arg0, ArgT... args) {
 
 _impl_.greeting_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:HelloResponse.greeting)
}
inline std::string* HelloResponse::mutable_greeting() {
  std::string* _s = _internal_mutable_greeting();
  // @@protoc_insertion_point(field_mutable:HelloResponse.greeting)
  return _s;
}
inline const std::string& HelloResponse::_internal_greeting() const {
  return _impl_.greeting_.Get();
}
inline void HelloResponse::_internal_set_greeting(const std::string& value) {
  
  _impl_.greeting_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloResponse::_internal_mutable_greeting() {
  
  return _impl_.greeting_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloResponse::release_greeting() {
  // @@protoc_insertion_point(field_release:HelloResponse.greeting)
  return _impl_.greeting_.Release();
}
inline void HelloResponse::set_allocated_greeting(std::string* greeting) {
  if (greeting != nullptr) {
    
  } else {
    
  }
  _impl_.greeting_.SetAllocated(greeting, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.greeting_.IsDefault()) {
    _impl_.greeting_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:HelloResponse.greeting)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_HelloRpc_2eproto
