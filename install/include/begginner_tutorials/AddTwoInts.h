// Generated by gencpp from file begginner_tutorials/AddTwoInts.msg
// DO NOT EDIT!


#ifndef BEGGINNER_TUTORIALS_MESSAGE_ADDTWOINTS_H
#define BEGGINNER_TUTORIALS_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <begginner_tutorials/AddTwoIntsRequest.h>
#include <begginner_tutorials/AddTwoIntsResponse.h>


namespace begginner_tutorials
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace begginner_tutorials


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::begginner_tutorials::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::begginner_tutorials::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::begginner_tutorials::AddTwoInts > {
  static const char* value()
  {
    return "begginner_tutorials/AddTwoInts";
  }

  static const char* value(const ::begginner_tutorials::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::begginner_tutorials::AddTwoIntsRequest> should match 
// service_traits::MD5Sum< ::begginner_tutorials::AddTwoInts > 
template<>
struct MD5Sum< ::begginner_tutorials::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::begginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::begginner_tutorials::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::begginner_tutorials::AddTwoIntsRequest> should match 
// service_traits::DataType< ::begginner_tutorials::AddTwoInts > 
template<>
struct DataType< ::begginner_tutorials::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::begginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::begginner_tutorials::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::begginner_tutorials::AddTwoIntsResponse> should match 
// service_traits::MD5Sum< ::begginner_tutorials::AddTwoInts > 
template<>
struct MD5Sum< ::begginner_tutorials::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::begginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::begginner_tutorials::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::begginner_tutorials::AddTwoIntsResponse> should match 
// service_traits::DataType< ::begginner_tutorials::AddTwoInts > 
template<>
struct DataType< ::begginner_tutorials::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::begginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::begginner_tutorials::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BEGGINNER_TUTORIALS_MESSAGE_ADDTWOINTS_H