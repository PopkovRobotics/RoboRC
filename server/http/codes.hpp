#pragma once

namespace http {
    /*
     Коды ответа HTTP, которые показывают был ли успешно выполнен
     HTTP запрос. Коды сгруппированы в 5 классов:
      1. Информационные 100-199
      2. Успешные 200-299
      3. Перенаправления 300-399
      4. Клиентские ошибки 400-499
      5. Серверные ошибки 500-599
     Коды состояния определены в 10-ой секции RFC 2616 (https://tools.ietf.org/html/rfc2616#section-10)
     Некоторые коды состояния не используются в программе, но есть в перечислении ниже
     и будут задействованы в будущем.
    */
    enum class status_code {
        unknown = 0,
        info_continue = 100,
        info_switch_protocol,
        info_processing,
        info_early_hints,
        succes_ok = 200,
        succes_created,
        succes_accepted,
        succes_non_authoritative,
        succes_no_content,
        succes_reset_content,
        succes_partial_content,
        redir_multiple_choice = 300,
        redir_moved_permanently,
        redir_found,
        redir_see_other,
        redir_not_modified,
        redir_use_proxy,
        redir_switch_proxy,
        redir_temporary,
        redir_permanent,
        client_bad_request = 400,
        client_unauthororized,
        client_payment_request,
        client_forbidden,
        client_not_found,
        client_method_not_allowed,
        client_not_acceptable,
        client_proxy_authentication,
        client_request_timeout,
        client_conflict,
        client_gone,
        client_length_request,
        client_precondition_failed,
        client_request_large,
        client_request_url_long,
        client_unsupported_media,
        client_request_range,
        client_expectation_failed,
        server_server_error = 500,
        server_not_implemented,
        server_bad_gateway,
        server_service_unavailable,
        server_gateway_timeout,
        server_http_not_supported,
    };
} // namespace http
