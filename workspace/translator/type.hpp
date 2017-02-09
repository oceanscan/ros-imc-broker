namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::#MSG_NAME#>
    {
      static const char* value()
      {
        return "#MSG_MD5#";
      }

      static const char* value(const DUNE::IMC::#MSG_NAME#& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::#MSG_NAME#>
    {
      static const char* value()
      {
        return "imc/#MSG_NAME#";
      }

      static const char* value(const DUNE::IMC::#MSG_NAME#& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::#MSG_NAME#>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::#MSG_NAME#& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::#MSG_NAME#>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::#MSG_NAME#& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::#MSG_NAME#& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::#MSG_NAME#& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
