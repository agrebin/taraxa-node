Creates a send transaction and prints it to standard output in JSON format.

```bash
$ ../create_send \
    --key 0000000000000000000000000000000000000000000000000000000000000001 \
    --receiver 036B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296 \
    --payload '' \
    --new-balance 3 \
    --previous 0000000000000000000000000000000000000000000000000000000000000000
{
    "signature": "5B04A4008C74E4CA8FDBFB2B24900B4241C4E171C548016D5C1878E39042FF561A837CD0C85D2E250E19B3B3CEAD6B047E7A6F36C5825ADC012FE02DCC708B6E",
    "previous": "0000000000000000000000000000000000000000000000000000000000000000",
    "receiver": "036B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296",
    "payload": "",
    "new-balance": "0000000000000003",
    "public-key": "036B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296",
    "hash": "23B174C182F9DF8D9B9B0769874AE02939B646E9483F941D95F1946B42257C83"
}
```